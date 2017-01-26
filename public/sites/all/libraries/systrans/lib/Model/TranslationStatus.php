<?php
/**
 * TranslationStatus
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
 * TranslationStatus Class Doc Comment
 *
 * @category    Class
 * @description 
 * @package     Systran\Client
 * @author      http://github.com/Systran-api/Systran-codegen
 * @license     http://www.apache.org/licenses/LICENSE-2.0 Apache Licene v2
 * @link
 */
class TranslationStatus implements ArrayAccess
{
    /**
      * Array of property to type mappings. Used for (de)serialization 
      * @var string[]
      */
    static $SystranTypes = array(
        'error' => '\Systran\Client\Model\ErrorResponse',
        'batch_id' => 'string',
        'cancelled' => 'bool',
        'created_at' => 'double',
        'description' => 'string',
        'expire_at' => 'double',
        'finished_at' => 'double',
        'finished_steps' => 'int',
        'status' => 'string',
        'total_steps' => 'int'
    );
  
    /** 
      * Array of attributes where the key is the local name, and the value is the original name
      * @var string[] 
      */
    static $attributeMap = array(
        'error' => 'error',
        'batch_id' => 'batchId',
        'cancelled' => 'cancelled',
        'created_at' => 'createdAt',
        'description' => 'description',
        'expire_at' => 'expireAt',
        'finished_at' => 'finishedAt',
        'finished_steps' => 'finishedSteps',
        'status' => 'status',
        'total_steps' => 'totalSteps'
    );
  
    /**
      * Array of attributes to setter functions (for deserialization of responses)
      * @var string[]
      */
    static $setters = array(
        'error' => 'setError',
        'batch_id' => 'setBatchId',
        'cancelled' => 'setCancelled',
        'created_at' => 'setCreatedAt',
        'description' => 'setDescription',
        'expire_at' => 'setExpireAt',
        'finished_at' => 'setFinishedAt',
        'finished_steps' => 'setFinishedSteps',
        'status' => 'setStatus',
        'total_steps' => 'setTotalSteps'
    );
  
    /**
      * Array of attributes to getter functions (for serialization of requests)
      * @var string[]
      */
    static $getters = array(
        'error' => 'getError',
        'batch_id' => 'getBatchId',
        'cancelled' => 'getCancelled',
        'created_at' => 'getCreatedAt',
        'description' => 'getDescription',
        'expire_at' => 'getExpireAt',
        'finished_at' => 'getFinishedAt',
        'finished_steps' => 'getFinishedSteps',
        'status' => 'getStatus',
        'total_steps' => 'getTotalSteps'
    );
  
    
    /**
      * $error Error of the request
      * @var \Systran\Client\Model\ErrorResponse
      */
    protected $error;
    
    /**
      * $batch_id Batch Identifier
      * @var string
      */
    protected $batch_id;
    
    /**
      * $cancelled Is the request cancelled
      * @var bool
      */
    protected $cancelled;
    
    /**
      * $created_at Creation time of the request (ms since the Epoch)
      * @var double
      */
    protected $created_at;
    
    /**
      * $description Description
      * @var string
      */
    protected $description;
    
    /**
      * $expire_at Expiration time of the request (ms since the Epoch)
      * @var double
      */
    protected $expire_at;
    
    /**
      * $finished_at Completion time of the request (ms since the Epoch)
      * @var double
      */
    protected $finished_at;
    
    /**
      * $finished_steps Number of finished steps
      * @var int
      */
    protected $finished_steps;
    
    /**
      * $status Status of the request
      * @var string
      */
    protected $status;
    
    /**
      * $total_steps Number of steps to complete
      * @var int
      */
    protected $total_steps;
    

    /**
     * Constructor
     * @param mixed[] $data Associated array of property value initalizing the model
     */
    public function __construct(array $data = null)
    {
        if ($data != null) {
            $this->error = $data["error"];
            $this->batch_id = $data["batch_id"];
            $this->cancelled = $data["cancelled"];
            $this->created_at = $data["created_at"];
            $this->description = $data["description"];
            $this->expire_at = $data["expire_at"];
            $this->finished_at = $data["finished_at"];
            $this->finished_steps = $data["finished_steps"];
            $this->status = $data["status"];
            $this->total_steps = $data["total_steps"];
        }
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
     * Gets batch_id
     * @return string
     */
    public function getBatchId()
    {
        return $this->batch_id;
    }
  
    /**
     * Sets batch_id
     * @param string $batch_id Batch Identifier
     * @return $this
     */
    public function setBatchId($batch_id)
    {
        
        $this->batch_id = $batch_id;
        return $this;
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
     * @param bool $cancelled Is the request cancelled
     * @return $this
     */
    public function setCancelled($cancelled)
    {
        
        $this->cancelled = $cancelled;
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
     * @param double $created_at Creation time of the request (ms since the Epoch)
     * @return $this
     */
    public function setCreatedAt($created_at)
    {
        
        $this->created_at = $created_at;
        return $this;
    }
    
    /**
     * Gets description
     * @return string
     */
    public function getDescription()
    {
        return $this->description;
    }
  
    /**
     * Sets description
     * @param string $description Description
     * @return $this
     */
    public function setDescription($description)
    {
        
        $this->description = $description;
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
     * @param double $expire_at Expiration time of the request (ms since the Epoch)
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
     * @param double $finished_at Completion time of the request (ms since the Epoch)
     * @return $this
     */
    public function setFinishedAt($finished_at)
    {
        
        $this->finished_at = $finished_at;
        return $this;
    }
    
    /**
     * Gets finished_steps
     * @return int
     */
    public function getFinishedSteps()
    {
        return $this->finished_steps;
    }
  
    /**
     * Sets finished_steps
     * @param int $finished_steps Number of finished steps
     * @return $this
     */
    public function setFinishedSteps($finished_steps)
    {
        
        $this->finished_steps = $finished_steps;
        return $this;
    }
    
    /**
     * Gets status
     * @return string
     */
    public function getStatus()
    {
        return $this->status;
    }
  
    /**
     * Sets status
     * @param string $status Status of the request
     * @return $this
     */
    public function setStatus($status)
    {
        $allowed_values = array("registered", "import", "started", "pending", "export", "finished", "error");
        if (!in_array($status, $allowed_values)) {
            throw new \InvalidArgumentException("Invalid value for 'status', must be one of 'registered', 'import', 'started', 'pending', 'export', 'finished', 'error'");
        }
        $this->status = $status;
        return $this;
    }
    
    /**
     * Gets total_steps
     * @return int
     */
    public function getTotalSteps()
    {
        return $this->total_steps;
    }
  
    /**
     * Sets total_steps
     * @param int $total_steps Number of steps to complete
     * @return $this
     */
    public function setTotalSteps($total_steps)
    {
        
        $this->total_steps = $total_steps;
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
