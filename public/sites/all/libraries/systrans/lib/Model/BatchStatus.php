<?php
/**
 * BatchStatus
 *
 * PHP version 5
 *
 * @category Class
 * @package  Systran\Client
 * @author   http://github.com/Systran-api/Systran-codegen
 * @license  http://www.apache.org/licenses/LICENSE-2.0 Apache Licene v2
 * @link
 */
/**
 *  Copyright 2015 SmartBear Software
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */
/**
 *
 *
 * Do not edit the class manually.
 */

namespace Systran\Client\Model;

use \ArrayAccess;
/**
 * BatchStatus Class Doc Comment
 *
 * @category    Class
 * @description 
 * @package     Systran\Client
 * @author      http://github.com/Systran-api/Systran-codegen
 * @license     http://www.apache.org/licenses/LICENSE-2.0 Apache Licene v2
 * @link
 */
class BatchStatus implements ArrayAccess
{
    /**
      * Array of property to type mappings. Used for (de)serialization 
      * @var string[]
      */
    static $SystranTypes = array(
        'cancelled' => 'bool',
        'closed' => 'bool',
        'created_at' => 'double',
        'expire_at' => 'double',
        'finished_at' => 'double',
        'requests' => '\Systran\Client\Model\BatchRequest[]',
        'error' => '\Systran\Client\Model\ErrorResponse'
    );
  
    /** 
      * Array of attributes where the key is the local name, and the value is the original name
      * @var string[] 
      */
    static $attributeMap = array(
        'cancelled' => 'cancelled',
        'closed' => 'closed',
        'created_at' => 'createdAt',
        'expire_at' => 'expireAt',
        'finished_at' => 'finishedAt',
        'requests' => 'requests',
        'error' => 'error'
    );
  
    /**
      * Array of attributes to setter functions (for deserialization of responses)
      * @var string[]
      */
    static $setters = array(
        'cancelled' => 'setCancelled',
        'closed' => 'setClosed',
        'created_at' => 'setCreatedAt',
        'expire_at' => 'setExpireAt',
        'finished_at' => 'setFinishedAt',
        'requests' => 'setRequests',
        'error' => 'setError'
    );
  
    /**
      * Array of attributes to getter functions (for serialization of requests)
      * @var string[]
      */
    static $getters = array(
        'cancelled' => 'getCancelled',
        'closed' => 'getClosed',
        'created_at' => 'getCreatedAt',
        'expire_at' => 'getExpireAt',
        'finished_at' => 'getFinishedAt',
        'requests' => 'getRequests',
        'error' => 'getError'
    );
  
    
    /**
      * $cancelled Is the batch cancelled
      * @var bool
      */
    protected $cancelled;
    
    /**
      * $closed Is the batch closed
      * @var bool
      */
    protected $closed;
    
    /**
      * $created_at Creation time of the batch (ms since the Epoch)
      * @var double
      */
    protected $created_at;
    
    /**
      * $expire_at Expiration time of the batch (ms since the Epoch). Is null while there are pending requests
      * @var double
      */
    protected $expire_at;
    
    /**
      * $finished_at Completion time of the batch (ms since the Epoch)
      * @var double
      */
    protected $finished_at;
    
    /**
      * $requests Array of requests
      * @var \Systran\Client\Model\BatchRequest[]
      */
    protected $requests;
    
    /**
      * $error Error of the request
      * @var \Systran\Client\Model\ErrorResponse
      */
    protected $error;
    

    /**
     * Constructor
     * @param mixed[] $data Associated array of property value initalizing the model
     */
    public function __construct(array $data = null)
    {
        if ($data != null) {
            $this->cancelled = $data["cancelled"];
            $this->closed = $data["closed"];
            $this->created_at = $data["created_at"];
            $this->expire_at = $data["expire_at"];
            $this->finished_at = $data["finished_at"];
            $this->requests = $data["requests"];
            $this->error = $data["error"];
        }
    }
    
    /**
     * Gets cancelled
     * @return bool
     */
    public function getCancelled()
    {
        return $this->cancelled;
    }
  
    /**
     * Sets cancelled
     * @param bool $cancelled Is the batch cancelled
     * @return $this
     */
    public function setCancelled($cancelled)
    {
        
        $this->cancelled = $cancelled;
        return $this;
    }
    
    /**
     * Gets closed
     * @return bool
     */
    public function getClosed()
    {
        return $this->closed;
    }
  
    /**
     * Sets closed
     * @param bool $closed Is the batch closed
     * @return $this
     */
    public function setClosed($closed)
    {
        
        $this->closed = $closed;
        return $this;
    }
    
    /**
     * Gets created_at
     * @return double
     */
    public function getCreatedAt()
    {
        return $this->created_at;
    }
  
    /**
     * Sets created_at
     * @param double $created_at Creation time of the batch (ms since the Epoch)
     * @return $this
     */
    public function setCreatedAt($created_at)
    {
        
        $this->created_at = $created_at;
        return $this;
    }
    
    /**
     * Gets expire_at
     * @return double
     */
    public function getExpireAt()
    {
        return $this->expire_at;
    }
  
    /**
     * Sets expire_at
     * @param double $expire_at Expiration time of the batch (ms since the Epoch). Is null while there are pending requests
     * @return $this
     */
    public function setExpireAt($expire_at)
    {
        
        $this->expire_at = $expire_at;
        return $this;
    }
    
    /**
     * Gets finished_at
     * @return double
     */
    public function getFinishedAt()
    {
        return $this->finished_at;
    }
  
    /**
     * Sets finished_at
     * @param double $finished_at Completion time of the batch (ms since the Epoch)
     * @return $this
     */
    public function setFinishedAt($finished_at)
    {
        
        $this->finished_at = $finished_at;
        return $this;
    }
    
    /**
     * Gets requests
     * @return \Systran\Client\Model\BatchRequest[]
     */
    public function getRequests()
    {
        return $this->requests;
    }
  
    /**
     * Sets requests
     * @param \Systran\Client\Model\BatchRequest[] $requests Array of requests
     * @return $this
     */
    public function setRequests($requests)
    {
        
        $this->requests = $requests;
        return $this;
    }
    
    /**
     * Gets error
     * @return \Systran\Client\Model\ErrorResponse
     */
    public function getError()
    {
        return $this->error;
    }
  
    /**
     * Sets error
     * @param \Systran\Client\Model\ErrorResponse $error Error of the request
     * @return $this
     */
    public function setError($error)
    {
        
        $this->error = $error;
        return $this;
    }
    
    /**
     * Returns true if offset exists. False otherwise.
     * @param  integer $offset Offset 
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->$offset);
    }
  
    /**
     * Gets offset.
     * @param  integer $offset Offset 
     * @return mixed 
     */
    public function offsetGet($offset)
    {
        return $this->$offset;
    }
  
    /**
     * Sets value based on offset.
     * @param  integer $offset Offset 
     * @param  mixed   $value  Value to be set
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        $this->$offset = $value;
    }
  
    /**
     * Unsets offset.
     * @param  integer $offset Offset 
     * @return void
     */
    public function offsetUnset($offset)
    {
        unset($this->$offset);
    }
  
    /**
     * Gets the string presentation of the object
     * @return string
     */
    public function __toString()
    {
        if (defined('JSON_PRETTY_PRINT')) {
            return json_encode(get_object_vars($this), JSON_PRETTY_PRINT);
        } else {
            return json_encode(get_object_vars($this));
        }
    }
}
