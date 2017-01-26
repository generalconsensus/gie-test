<?php
/**
 * TranslationOutput
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
 * TranslationOutput Class Doc Comment
 *
 * @category    Class
 * @description 
 * @package     Systran\Client
 * @author      http://github.com/Systran-api/Systran-codegen
 * @license     http://www.apache.org/licenses/LICENSE-2.0 Apache Licene v2
 * @link
 */
class TranslationOutput implements ArrayAccess
{
    /**
      * Array of property to type mappings. Used for (de)serialization 
      * @var string[]
      */
    static $SystranTypes = array(
        'warning' => 'string',
        'error' => 'string',
        'detected_language' => 'string',
        'detected_language_confidence' => 'double',
        'output' => 'string',
        'back_translation' => 'string',
        'source' => 'string'
    );
  
    /** 
      * Array of attributes where the key is the local name, and the value is the original name
      * @var string[] 
      */
    static $attributeMap = array(
        'warning' => 'warning',
        'error' => 'error',
        'detected_language' => 'detectedLanguage',
        'detected_language_confidence' => 'detectedLanguageConfidence',
        'output' => 'output',
        'back_translation' => 'backTranslation',
        'source' => 'source'
    );
  
    /**
      * Array of attributes to setter functions (for deserialization of responses)
      * @var string[]
      */
    static $setters = array(
        'warning' => 'setWarning',
        'error' => 'setError',
        'detected_language' => 'setDetectedLanguage',
        'detected_language_confidence' => 'setDetectedLanguageConfidence',
        'output' => 'setOutput',
        'back_translation' => 'setBackTranslation',
        'source' => 'setSource'
    );
  
    /**
      * Array of attributes to getter functions (for serialization of requests)
      * @var string[]
      */
    static $getters = array(
        'warning' => 'getWarning',
        'error' => 'getError',
        'detected_language' => 'getDetectedLanguage',
        'detected_language_confidence' => 'getDetectedLanguageConfidence',
        'output' => 'getOutput',
        'back_translation' => 'getBackTranslation',
        'source' => 'getSource'
    );
  
    
    /**
      * $warning Warning at output level
      * @var string
      */
    protected $warning;
    
    /**
      * $error Error at output level
      * @var string
      */
    protected $error;
    
    /**
      * $detected_language Result of the automatic language detection if `auto` was specified as source language
      * @var string
      */
    protected $detected_language;
    
    /**
      * $detected_language_confidence Automatic language detection confidence
      * @var double
      */
    protected $detected_language_confidence;
    
    /**
      * $output Translated text
      * @var string
      */
    protected $output;
    
    /**
      * $back_translation Retranslation of output in source language, if backTranslation was specified
      * @var string
      */
    protected $back_translation;
    
    /**
      * $source Source text, if withSource was specified
      * @var string
      */
    protected $source;
    

    /**
     * Constructor
     * @param mixed[] $data Associated array of property value initalizing the model
     */
    public function __construct(array $data = null)
    {
        if ($data != null) {
            $this->warning = $data["warning"];
            $this->error = $data["error"];
            $this->detected_language = $data["detected_language"];
            $this->detected_language_confidence = $data["detected_language_confidence"];
            $this->output = $data["output"];
            $this->back_translation = $data["back_translation"];
            $this->source = $data["source"];
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
     * @param string $warning Warning at output level
     * @return $this
     */
    public function setWarning($warning)
    {
        
        $this->warning = $warning;
        return $this;
    }
    
    /**
     * Gets error
     * @return string
     */
    public function getError()
    {
        return $this->error;
    }
  
    /**
     * Sets error
     * @param string $error Error at output level
     * @return $this
     */
    public function setError($error)
    {
        
        $this->error = $error;
        return $this;
    }
    
    /**
     * Gets detected_language
     * @return string
     */
    public function getDetectedLanguage()
    {
        return $this->detected_language;
    }
  
    /**
     * Sets detected_language
     * @param string $detected_language Result of the automatic language detection if `auto` was specified as source language
     * @return $this
     */
    public function setDetectedLanguage($detected_language)
    {
        
        $this->detected_language = $detected_language;
        return $this;
    }
    
    /**
     * Gets detected_language_confidence
     * @return double
     */
    public function getDetectedLanguageConfidence()
    {
        return $this->detected_language_confidence;
    }
  
    /**
     * Sets detected_language_confidence
     * @param double $detected_language_confidence Automatic language detection confidence
     * @return $this
     */
    public function setDetectedLanguageConfidence($detected_language_confidence)
    {
        
        $this->detected_language_confidence = $detected_language_confidence;
        return $this;
    }
    
    /**
     * Gets output
     * @return string
     */
    public function getOutput()
    {
        return $this->output;
    }
  
    /**
     * Sets output
     * @param string $output Translated text
     * @return $this
     */
    public function setOutput($output)
    {
        
        $this->output = $output;
        return $this;
    }
    
    /**
     * Gets back_translation
     * @return string
     */
    public function getBackTranslation()
    {
        return $this->back_translation;
    }
  
    /**
     * Sets back_translation
     * @param string $back_translation Retranslation of output in source language, if backTranslation was specified
     * @return $this
     */
    public function setBackTranslation($back_translation)
    {
        
        $this->back_translation = $back_translation;
        return $this;
    }
    
    /**
     * Gets source
     * @return string
     */
    public function getSource()
    {
        return $this->source;
    }
  
    /**
     * Sets source
     * @param string $source Source text, if withSource was specified
     * @return $this
     */
    public function setSource($source)
    {
        
        $this->source = $source;
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
