<?php
/**
 * SupportedLanguageResponse
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
 * SupportedLanguageResponse Class Doc Comment
 *
 * @category    Class
 * @description 
 * @package     Systran\Client
 * @author      http://github.com/Systran-api/Systran-codegen
 * @license     http://www.apache.org/licenses/LICENSE-2.0 Apache Licene v2
 * @link
 */
class SupportedLanguageResponse implements ArrayAccess
{
    /**
      * Array of property to type mappings. Used for (de)serialization 
      * @var string[]
      */
    static $SystranTypes = array(
        'warning' => 'string',
        'error' => '\Systran\Client\Model\ErrorResponse',
        'language_pairs' => '\Systran\Client\Model\LanguagePair[]'
    );
  
    /** 
      * Array of attributes where the key is the local name, and the value is the original name
      * @var string[] 
      */
    static $attributeMap = array(
        'warning' => 'warning',
        'error' => 'error',
        'language_pairs' => 'languagePairs'
    );
  
    /**
      * Array of attributes to setter functions (for deserialization of responses)
      * @var string[]
      */
    static $setters = array(
        'warning' => 'setWarning',
        'error' => 'setError',
        'language_pairs' => 'setLanguagePairs'
    );
  
    /**
      * Array of attributes to getter functions (for serialization of requests)
      * @var string[]
      */
    static $getters = array(
        'warning' => 'getWarning',
        'error' => 'getError',
        'language_pairs' => 'getLanguagePairs'
    );
  
    
    /**
      * $warning Warning at request level
      * @var string
      */
    protected $warning;
    
    /**
      * $error Error at request level
      * @var \Systran\Client\Model\ErrorResponse
      */
    protected $error;
    
    /**
      * $language_pairs Array of language pairs
      * @var \Systran\Client\Model\LanguagePair[]
      */
    protected $language_pairs;
    

    /**
     * Constructor
     * @param mixed[] $data Associated array of property value initalizing the model
     */
    public function __construct(array $data = null)
    {
        if ($data != null) {
            $this->warning = $data["warning"];
            $this->error = $data["error"];
            $this->language_pairs = $data["language_pairs"];
        }
    }
    
    /**
     * Gets warning
     * @return string
     */
    public function getWarning()
    {
        return $this->warning;
    }
  
    /**
     * Sets warning
     * @param string $warning Warning at request level
     * @return $this
     */
    public function setWarning($warning)
    {
        
        $this->warning = $warning;
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
     * @param \Systran\Client\Model\ErrorResponse $error Error at request level
     * @return $this
     */
    public function setError($error)
    {
        
        $this->error = $error;
        return $this;
    }
    
    /**
     * Gets language_pairs
     * @return \Systran\Client\Model\LanguagePair[]
     */
    public function getLanguagePairs()
    {
        return $this->language_pairs;
    }
  
    /**
     * Sets language_pairs
     * @param \Systran\Client\Model\LanguagePair[] $language_pairs Array of language pairs
     * @return $this
     */
    public function setLanguagePairs($language_pairs)
    {
        
        $this->language_pairs = $language_pairs;
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
