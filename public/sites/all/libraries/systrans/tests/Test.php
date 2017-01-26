<?php
require_once(__DIR__ . '/../autoload.php');
require_once(__DIR__ . '/../lib/translationApi/TranslationApi.php');
foreach (glob("/../lib/Model/*.php") as $filename)
{
    include $filename;
}
require_once(__DIR__ . '/../vendor/autoload.php');

class Test extends PHPUnit_Framework_TestCase
{
    var $config;
    var $api_client;

    public function setUp()
    {
        $this->config = new \Systran\Client\Configuration();
        if (!file_exists(__DIR__ . '/../apiKey.txt'))
            throw new Exception("To properly run the tests, please add an apiKey.txt file containing your api key at the library root folder or edit the test file with your key");
        $api_key = new SplFileObject(__DIR__ . '/../apiKey.txt');
        $this->config->setApiKey("key",$api_key->fgets());
        $this->config->setHost("https://platform.systran.net:8904");
        if(!$this->config->getApiKey("key"))
            throw new Exception("No api key found, please check your apiKey.txt file");
        $this->api_client = new \Systran\Client\ApiClient($this->config);
    }

    public function testSupportedLanguagesGet()
    {
        $file_api = new \Systran\Client\TranslationApi($this->api_client);
        $this->assertNotNull($file_api->translationSupportedLanguagesGet());
    }

    public function testFileTranslatePost()
    {
        $file_api = new \Systran\Client\TranslationApi($this->api_client);

        $input_file = new SplFileObject(__DIR__ . '/test.txt');
        $this->assertNotNull($file_api->translationFileTranslatePost($input_file, "fr", "en", null, null, null, null, null, null, null, null, true )->getRequestId());
    }
    public function testFileResultGet()
    {
        $file_api = new \Systran\Client\TranslationApi($this->api_client);

        $input_file = new SplFileObject(__DIR__ . '/test.txt');
        $output = $file_api->translationFileTranslatePost($input_file, "fr", "en", null, null, null, null, null, null, null, null, true )->getRequestId();
        $file_api = new \Systran\Client\TranslationApi($this->api_client);
        $this->assertNotNull($file_api->translationFileResultGet($output));
    }
    public function testFileStatusGet()
    {
        $file_api = new \Systran\Client\TranslationApi($this->api_client);

        $input_file = new SplFileObject(__DIR__ . '/test.txt');
        $output = $file_api->translationFileTranslatePost($input_file, "fr", "en", null, null, null, null, null, null, null, null, true )->getRequestId();
        $file_api = new \Systran\Client\TranslationApi($this->api_client);
        $this->assertNotNull($file_api->translationFileStatusGet($output));
    }
    public function testProfileGet()
    {
        $file_api = new \Systran\Client\TranslationApi($this->api_client);
        $this->assertNotNull($file_api->translationProfileGet());
    }

    public function testTextTranslatePost()
    {
        $file_api = new \Systran\Client\TranslationApi($this->api_client);
        $this->assertNotNull($file_api->translationTextTranslatePost("This is a test.", "fr"));
    }
    public function testFileCancelPost()
    {
        $input_file = new SplFileObject(__DIR__ . '/test.txt');
        $file_api = new \Systran\Client\TranslationApi($this->api_client);
        $output = $file_api->translationFileTranslatePost($input_file, "fr", "en", null, null, null, null, null, null, null, null, true )->getRequestId();
        $this->assertNotNull($file_api->translationFileCancelPost($output));
    }
    public function testFileBatchCreatePost()
    {
        $file_api = new \Systran\Client\TranslationApi($this->api_client);
        $this->assertNotNull($file_api->translationFileBatchCreatePost()->getBatchId());
    }
    public function testFileBatchCancelPost()
    {
    $file_api = new \Systran\Client\TranslationApi($this->api_client);
    $this->assertNotNull($file_api->translationFileBatchCancelPost($file_api->translationFileBatchCreatePost()->getBatchId()));
    }

    public function testFileBatchStatusGet()
    {
        $file_api = new \Systran\Client\TranslationApi($this->api_client);
        $this->assertNotNull($file_api->translationFileBatchStatusGet($file_api->translationFileBatchCreatePost()->getBatchId()));
    }
    public function testFileBatchClosePost()
    {
        $file_api = new \Systran\Client\TranslationApi($this->api_client);
        $this->assertNotNull($file_api->translationFileBatchClosePost($file_api->translationFileBatchCreatePost()->getBatchId()));
    }

}
