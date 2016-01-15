require 'net/ssh/proxy/command'

# Get autoscale group servers
autoscaling = Aws::AutoScaling::Client.new(region: 'us-east-1')
ec2 = Aws::EC2::Client.new(region: 'us-east-1')

if ENV['server']
  servers = [ENV['server']]
  set :run_updates, false
else
  servers = Array.new
  # First load the autoscale groups by name
  groups = autoscaling.describe_auto_scaling_groups({
    auto_scaling_group_names: ["gie-test"],
  })

  # Then iterate through those
  groups.data.auto_scaling_groups.each do |group|
    # Then through each instance
    group.instances.each do |instance|
      # Load the details to get the private IP address
      details = Aws::EC2::Instance.new(instance.instance_id, {
        region: 'us-east-1'
      })
      servers.push('gie@' + details.data.private_ip_address)
    end
  end
end

# The stage to use
set :stage, :production

# An array containing site URL, used for Varnish bans
set :site_url, %w{www.globalinnovationexchange.org}

# An array containing drupal sites to copy settings files in
set :site_folder, %w{default}

# The directory where the webroot 
set :webroot, 'public'

# The path to the project on the server
set :deploy_to, '/var/www/vhosts/gie.www'

# Where the temporary directory is
set :tmp_dir, fetch(:deploy_to)

# Which branch to deploy
set :branch, "live"

rsync_options = %w[--recursive --chmod=Dug=rwx,Do=rx --perms --delete --delete-excluded --exclude=.git* --exclude=node_modules]
rsync_options.unshift("-e 'ssh -o \"ProxyCommand ssh -A gie@utility.gie.byf1.io exec nc %h %p 2>/dev/null\"'")

set :rsync_options, rsync_options

# Simple Role Syntax
# ==================
# Supports bulk-adding hosts to roles, the primary
# server in each group is considered to be the first
# unless any hosts have the primary property set.
role :app, servers, :primary => true
role :web, servers

db = Array.new
db.push(servers.at(0))

role :db, db

set :ssh_options, {
  auth_methods: %w(publickey),
  proxy: Net::SSH::Proxy::Command.new('ssh gie@utility.gie.byf1.io -W %h:%p 2>/dev/null'),
}

# Extended Server Syntax
# ======================
# This can be used to drop a more detailed server
# definition into the server list. The second argument
# something that quacks like a has can be used to set
# extended properties on the server.
# server 'example.com', user: 'deploy', roles: %w{web app}, my_property: :my_value

# you can set custom ssh options
# it's possible to pass any option but you need to keep in mind that net/ssh understand limited list of options
# you can see them in [net/ssh documentation](http://net-ssh.github.io/net-ssh/classes/Net/SSH.html#method-c-start)
# set it globally
#  set :ssh_options, {
#    keys: %w(/home/rlisowski/.ssh/id_rsa),
#    forward_agent: false,
#    auth_methods: %w(password)
#  }
# and/or per server
# server 'example.com',
#   user: 'user_name',
#   roles: %w{web app},
#   ssh_options: {
#     user: 'user_name', # overrides user setting above
#     keys: %w(/home/user_name/.ssh/id_rsa),
#     forward_agent: false,
#     auth_methods: %w(publickey password)
#     # password: 'please use keys'
#   }
# setting per server overrides global ssh_options

# fetch(:default_env).merge!(:rails_env, :dev)
