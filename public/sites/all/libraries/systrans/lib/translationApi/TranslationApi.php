<?php
/**
 * TranslationApi
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

namespace Systran\Client;

use \Systran\Client\Configuration;
use \Systran\Client\ApiClient;
use \Systran\Client\ApiException;
use \Systran\Client\ObjectSerializer;

/**
 * TranslationApi Class Doc Comment
 *
 * @category Class
 * @package  Systran\Client
 * @author   http://github.com/Systran-api/Systran-codegen
 * @license  http://www.apache.org/licenses/LICENSE-2.0 Apache Licene v2
 * @link
 */
class TranslationApi
{

    /**
     * API Client
     * @var \Systran\Client\ApiClient instance of the ApiClient
     */
    protected $apiClient;
  
    /**
     * Constructor
     * @param \Systran\Client\ApiClient|null $apiClient The api client to use
     */
    function __construct($apiClient = null)
    {
        if ($apiClient == null) {
            $apiClient = new ApiClient();
            $apiClient->getConfig()->setHost('https://platform.systran.net:8904');
        }
  
        $this->apiClient = $apiClient;
    }
  
    /**
     * Get API client
     * @return \Systran\Client\ApiClient get the API client
     */
    public function getApiClient()
    {
        return $this->apiClient;
    }
  
    /**
     * Set the API client
     * @param \Systran\Client\ApiClient $apiClient set the API client
     * @return TranslationApi
     */
    public function setApiClient(ApiClient $apiClient)
    {
        $this->apiClient = $apiClient;
        return $this;
    }
  
    
    /**
     * translationFileBatchCancelPost
     *
     * Batch Cancel
     *
     * @param string $batch_id Batch Identifier (required)
     * @param string $callback Javascript callback function name for JSONP Support (optional)
     * @return \Systran\Client\Model\BatchCancel
     * @throws \Systran\Client\ApiException on non-2xx response
     */
    public function translationFileBatchCancelPost($batch_id, $callback=null)
    {
        
        // verify the required parameter 'batch_id' is set
        if ($batch_id === null) {
            throw new \InvalidArgumentException('Missing the required parameter $batch_id when calling translationFileBatchCancelPost');
        }
  
        // parse inputs
        $resourcePath = "/translation/file/batch/cancel";
        $resourcePath = str_replace("{format}", "json", $resourcePath);
        $method = "POST";
        $httpBody = '';
        $queryParams = array();
        $headerParams = array();
        $formParams = array();
        $_header_accept = ApiClient::selectHeaderAccept(array('application/json'));
        if (!is_null($_header_accept)) {
            $headerParams['Accept'] = $_header_accept;
        }
        $headerParams['Content-Type'] = ApiClient::selectHeaderContentType(array());
  
        // query params
        if ($batch_id !== null) {
            $queryParams['batchId'] = $this->apiClient->getSerializer()->toQueryValue($batch_id);
        }// query params
        if ($callback !== null) {
            $queryParams['callback'] = $this->apiClient->getSerializer()->toQueryValue($callback);
        }
        
        
        
        
  
        // for model (json/xml)
        if (isset($_tempBody)) {
            $httpBody = $_tempBody; // $_tempBody is the method argument, if present
        } else if (count($formParams) > 0) {
            $httpBody = $formParams; // for HTTP post (form)
        }
        
        $apiKey = $this->apiClient->getApiKeyWithPrefix('Authorization');
        if (isset($apiKey)) {
            $headerParams['Authorization'] = $apiKey;
        }
        
        
        
        $apiKey = $this->apiClient->getApiKeyWithPrefix('key');
        if (isset($apiKey)) {
            $queryParams['key'] = $apiKey;
        }
        
        
        
        // make the API Call
        try
        {
            list($response, $httpHeader) = $this->apiClient->callApi(
                $resourcePath, $method,
                $queryParams, $httpBody,
                $headerParams, '\Systran\Client\Model\BatchCancel'
            );
            
            if (!$response) {
                return null;
            }

            return $this->apiClient->getSerializer()->deserialize($response, '\Systran\Client\Model\BatchCancel', $httpHeader);
            
        } catch (ApiException $e) {
            switch ($e->getCode()) { 
            case 200:
                $data = $this->apiClient->getSerializer()->deserialize($e->getResponseBody(), '\Systran\Client\Model\BatchCancel', $e->getResponseHeaders());
                $e->setResponseObject($data);
                break;
            }
  
            throw $e;
        }
        
        return null;
        
    }
    
    /**
     * translationFileBatchClosePost
     *
     * Batch Close
     *
     * @param string $batch_id Batch Identifier (required)
     * @param string $callback Javascript callback function name for JSONP Support (optional)
     * @return \Systran\Client\Model\BatchClose
     * @throws \Systran\Client\ApiException on non-2xx response
     */
    public function translationFileBatchClosePost($batch_id, $callback=null)
    {
        
        // verify the required parameter 'batch_id' is set
        if ($batch_id === null) {
            throw new \InvalidArgumentException('Missing the required parameter $batch_id when calling translationFileBatchClosePost');
        }
  
        // parse inputs
        $resourcePath = "/translation/file/batch/close";
        $resourcePath = str_replace("{format}", "json", $resourcePath);
        $method = "POST";
        $httpBody = '';
        $queryParams = array();
        $headerParams = array();
        $formParams = array();
        $_header_accept = ApiClient::selectHeaderAccept(array('application/json'));
        if (!is_null($_header_accept)) {
            $headerParams['Accept'] = $_header_accept;
        }
        $headerParams['Content-Type'] = ApiClient::selectHeaderContentType(array());
  
        // query params
        if ($batch_id !== null) {
            $queryParams['batchId'] = $this->apiClient->getSerializer()->toQueryValue($batch_id);
        }// query params
        if ($callback !== null) {
            $queryParams['callback'] = $this->apiClient->getSerializer()->toQueryValue($callback);
        }
        
        
        
        
  
        // for model (json/xml)
        if (isset($_tempBody)) {
            $httpBody = $_tempBody; // $_tempBody is the method argument, if present
        } else if (count($formParams) > 0) {
            $httpBody = $formParams; // for HTTP post (form)
        }
        
        $apiKey = $this->apiClient->getApiKeyWithPrefix('Authorization');
        if (isset($apiKey)) {
            $headerParams['Authorization'] = $apiKey;
        }
        
        
        
        $apiKey = $this->apiClient->getApiKeyWithPrefix('key');
        if (isset($apiKey)) {
            $queryParams['key'] = $apiKey;
        }
        
        
        
        // make the API Call
        try
        {
            list($response, $httpHeader) = $this->apiClient->callApi(
                $resourcePath, $method,
                $queryParams, $httpBody,
                $headerParams, '\Systran\Client\Model\BatchClose'
            );
            
            if (!$response) {
                return null;
            }

            return $this->apiClient->getSerializer()->deserialize($response, '\Systran\Client\Model\BatchClose', $httpHeader);
            
        } catch (ApiException $e) {
            switch ($e->getCode()) { 
            case 200:
                $data = $this->apiClient->getSerializer()->deserialize($e->getResponseBody(), '\Systran\Client\Model\BatchClose', $e->getResponseHeaders());
                $e->setResponseObject($data);
                break;
            }
  
            throw $e;
        }
        
        return null;
        
    }
    
    /**
     * translationFileBatchCreatePost
     *
     * Batch Create
     *
     * @param string $callback Javascript callback function name for JSONP Support (optional)
     * @return \Systran\Client\Model\BatchCreate
     * @throws \Systran\Client\ApiException on non-2xx response
     */
    public function translationFileBatchCreatePost($callback=null)
    {
        
  
        // parse inputs
        $resourcePath = "/translation/file/batch/create";
        $resourcePath = str_replace("{format}", "json", $resourcePath);
        $method = "POST";
        $httpBody = '';
        $queryParams = array();
        $headerParams = array();
        $formParams = array();
        $_header_accept = ApiClient::selectHeaderAccept(array('application/json'));
        if (!is_null($_header_accept)) {
            $headerParams['Accept'] = $_header_accept;
        }
        $headerParams['Content-Type'] = ApiClient::selectHeaderContentType(array());
  
        // query params
        if ($callback !== null) {
            $queryParams['callback'] = $this->apiClient->getSerializer()->toQueryValue($callback);
        }
        
        
        
        
  
        // for model (json/xml)
        if (isset($_tempBody)) {
            $httpBody = $_tempBody; // $_tempBody is the method argument, if present
        } else if (count($formParams) > 0) {
            $httpBody = $formParams; // for HTTP post (form)
        }
        
        $apiKey = $this->apiClient->getApiKeyWithPrefix('Authorization');
        if (isset($apiKey)) {
            $headerParams['Authorization'] = $apiKey;
        }
        
        
        
        $apiKey = $this->apiClient->getApiKeyWithPrefix('key');
        if (isset($apiKey)) {
            $queryParams['key'] = $apiKey;
        }
        
        
        
        // make the API Call
        try
        {
            list($response, $httpHeader) = $this->apiClient->callApi(
                $resourcePath, $method,
                $queryParams, $httpBody,
                $headerParams, '\Systran\Client\Model\BatchCreate'
            );
            
            if (!$response) {
                return null;
            }

            return $this->apiClient->getSerializer()->deserialize($response, '\Systran\Client\Model\BatchCreate', $httpHeader);
            
        } catch (ApiException $e) {
            switch ($e->getCode()) { 
            case 200:
                $data = $this->apiClient->getSerializer()->deserialize($e->getResponseBody(), '\Systran\Client\Model\BatchCreate', $e->getResponseHeaders());
                $e->setResponseObject($data);
                break;
            }
  
            throw $e;
        }
        
        return null;
        
    }
    
    /**
     * translationFileBatchStatusGet
     *
     * Batch Status
     *
     * @param string $batch_id Batch Identifier (required)
     * @param string $callback Javascript callback function name for JSONP Support (optional)
     * @return \Systran\Client\Model\BatchStatus
     * @throws \Systran\Client\ApiException on non-2xx response
     */
    public function translationFileBatchStatusGet($batch_id, $callback=null)
    {
        
        // verify the required parameter 'batch_id' is set
        if ($batch_id === null) {
            throw new \InvalidArgumentException('Missing the required parameter $batch_id when calling translationFileBatchStatusGet');
        }
  
        // parse inputs
        $resourcePath = "/translation/file/batch/status";
        $resourcePath = str_replace("{format}", "json", $resourcePath);
        $method = "GET";
        $httpBody = '';
        $queryParams = array();
        $headerParams = array();
        $formParams = array();
        $_header_accept = ApiClient::selectHeaderAccept(array('application/json'));
        if (!is_null($_header_accept)) {
            $headerParams['Accept'] = $_header_accept;
        }
        $headerParams['Content-Type'] = ApiClient::selectHeaderContentType(array());
  
        // query params
        if ($batch_id !== null) {
            $queryParams['batchId'] = $this->apiClient->getSerializer()->toQueryValue($batch_id);
        }// query params
        if ($callback !== null) {
            $queryParams['callback'] = $this->apiClient->getSerializer()->toQueryValue($callback);
        }
        
        
        
        
  
        // for model (json/xml)
        if (isset($_tempBody)) {
            $httpBody = $_tempBody; // $_tempBody is the method argument, if present
        } else if (count($formParams) > 0) {
            $httpBody = $formParams; // for HTTP post (form)
        }
        
        $apiKey = $this->apiClient->getApiKeyWithPrefix('Authorization');
        if (isset($apiKey)) {
            $headerParams['Authorization'] = $apiKey;
        }
        
        
        
        $apiKey = $this->apiClient->getApiKeyWithPrefix('key');
        if (isset($apiKey)) {
            $queryParams['key'] = $apiKey;
        }
        
        
        
        // make the API Call
        try
        {
            list($response, $httpHeader) = $this->apiClient->callApi(
                $resourcePath, $method,
                $queryParams, $httpBody,
                $headerParams, '\Systran\Client\Model\BatchStatus'
            );
            
            if (!$response) {
                return null;
            }

            return $this->apiClient->getSerializer()->deserialize($response, '\Systran\Client\Model\BatchStatus', $httpHeader);
            
        } catch (ApiException $e) {
            switch ($e->getCode()) { 
            case 200:
                $data = $this->apiClient->getSerializer()->deserialize($e->getResponseBody(), '\Systran\Client\Model\BatchStatus', $e->getResponseHeaders());
                $e->setResponseObject($data);
                break;
            }
  
            throw $e;
        }
        
        return null;
        
    }
    
    /**
     * translationFileCancelPost
     *
     * Translate Cancel
     *
     * @param string $request_id Request Identifier (required)
     * @param string $callback Javascript callback function name for JSONP Support (optional)
     * @return \Systran\Client\Model\TranslationCancel
     * @throws \Systran\Client\ApiException on non-2xx response
     */
    public function translationFileCancelPost($request_id, $callback=null)
    {
        
        // verify the required parameter 'request_id' is set
        if ($request_id === null) {
            throw new \InvalidArgumentException('Missing the required parameter $request_id when calling translationFileCancelPost');
        }
  
        // parse inputs
        $resourcePath = "/translation/file/cancel";
        $resourcePath = str_replace("{format}", "json", $resourcePath);
        $method = "POST";
        $httpBody = '';
        $queryParams = array();
        $headerParams = array();
        $formParams = array();
        $_header_accept = ApiClient::selectHeaderAccept(array('application/json'));
        if (!is_null($_header_accept)) {
            $headerParams['Accept'] = $_header_accept;
        }
        $headerParams['Content-Type'] = ApiClient::selectHeaderContentType(array());
  
        // query params
        if ($request_id !== null) {
            $queryParams['requestId'] = $this->apiClient->getSerializer()->toQueryValue($request_id);
        }// query params
        if ($callback !== null) {
            $queryParams['callback'] = $this->apiClient->getSerializer()->toQueryValue($callback);
        }
        
        
        
        
  
        // for model (json/xml)
        if (isset($_tempBody)) {
            $httpBody = $_tempBody; // $_tempBody is the method argument, if present
        } else if (count($formParams) > 0) {
            $httpBody = $formParams; // for HTTP post (form)
        }
        
        $apiKey = $this->apiClient->getApiKeyWithPrefix('Authorization');
        if (isset($apiKey)) {
            $headerParams['Authorization'] = $apiKey;
        }
        
        
        
        $apiKey = $this->apiClient->getApiKeyWithPrefix('key');
        if (isset($apiKey)) {
            $queryParams['key'] = $apiKey;
        }
        
        
        
        // make the API Call
        try
        {
            list($response, $httpHeader) = $this->apiClient->callApi(
                $resourcePath, $method,
                $queryParams, $httpBody,
                $headerParams, '\Systran\Client\Model\TranslationCancel'
            );
            
            if (!$response) {
                return null;
            }

            return $this->apiClient->getSerializer()->deserialize($response, '\Systran\Client\Model\TranslationCancel', $httpHeader);
            
        } catch (ApiException $e) {
            switch ($e->getCode()) { 
            case 200:
                $data = $this->apiClient->getSerializer()->deserialize($e->getResponseBody(), '\Systran\Client\Model\TranslationCancel', $e->getResponseHeaders());
                $e->setResponseObject($data);
                break;
            }
  
            throw $e;
        }
        
        return null;
        
    }
    
    /**
     * translationFileResultGet
     *
     * Translate Result
     *
     * @param string $request_id Request Identifier (required)
     * @param string $callback Javascript callback function name for JSONP Support (optional)
     * @return \Systran\Client\Model\TranslationFileResponse
     * @throws \Systran\Client\ApiException on non-2xx response
     */
    public function translationFileResultGet($request_id, $callback=null)
    {
        
        // verify the required parameter 'request_id' is set
        if ($request_id === null) {
            throw new \InvalidArgumentException('Missing the required parameter $request_id when calling translationFileResultGet');
        }
  
        // parse inputs
        $resourcePath = "/translation/file/result";
        $resourcePath = str_replace("{format}", "json", $resourcePath);
        $method = "GET";
        $httpBody = '';
        $queryParams = array();
        $headerParams = array();
        $formParams = array();
        $_header_accept = ApiClient::selectHeaderAccept(array('application/json', 'multipart/mixed', '*/*'));
        if (!is_null($_header_accept)) {
            $headerParams['Accept'] = $_header_accept;
        }
        $headerParams['Content-Type'] = ApiClient::selectHeaderContentType(array());
  
        // query params
        if ($request_id !== null) {
            $queryParams['requestId'] = $this->apiClient->getSerializer()->toQueryValue($request_id);
        }// query params
        if ($callback !== null) {
            $queryParams['callback'] = $this->apiClient->getSerializer()->toQueryValue($callback);
        }
        
        
        
        
  
        // for model (json/xml)
        if (isset($_tempBody)) {
            $httpBody = $_tempBody; // $_tempBody is the method argument, if present
        } else if (count($formParams) > 0) {
            $httpBody = $formParams; // for HTTP post (form)
        }
        
        $apiKey = $this->apiClient->getApiKeyWithPrefix('Authorization');
        if (isset($apiKey)) {
            $headerParams['Authorization'] = $apiKey;
        }
        
        
        
        $apiKey = $this->apiClient->getApiKeyWithPrefix('key');
        if (isset($apiKey)) {
            $queryParams['key'] = $apiKey;
        }
        
        
        
        // make the API Call
        try
        {
            list($response, $httpHeader) = $this->apiClient->callApi(
                $resourcePath, $method,
                $queryParams, $httpBody,
                $headerParams, '\Systran\Client\Model\TranslationFileResponse'
            );
            
            if (!$response) {
                return null;
            }

            return $this->apiClient->getSerializer()->deserialize($response, '\Systran\Client\Model\TranslationFileResponse', $httpHeader);
            
        } catch (ApiException $e) {
            switch ($e->getCode()) { 
            case 200:
                $data = $this->apiClient->getSerializer()->deserialize($e->getResponseBody(), '\Systran\Client\Model\TranslationFileResponse', $e->getResponseHeaders());
                $e->setResponseObject($data);
                break;
            }
  
            throw $e;
        }
        
        return null;
        
    }
    
    /**
     * translationFileStatusGet
     *
     * Translate Status
     *
     * @param string $request_id Request Identifier (required)
     * @param string $callback Javascript callback function name for JSONP Support (optional)
     * @return \Systran\Client\Model\TranslationStatus
     * @throws \Systran\Client\ApiException on non-2xx response
     */
    public function translationFileStatusGet($request_id, $callback=null)
    {
        
        // verify the required parameter 'request_id' is set
        if ($request_id === null) {
            throw new \InvalidArgumentException('Missing the required parameter $request_id when calling translationFileStatusGet');
        }
  
        // parse inputs
        $resourcePath = "/translation/file/status";
        $resourcePath = str_replace("{format}", "json", $resourcePath);
        $method = "GET";
        $httpBody = '';
        $queryParams = array();
        $headerParams = array();
        $formParams = array();
        $_header_accept = ApiClient::selectHeaderAccept(array('application/json'));
        if (!is_null($_header_accept)) {
            $headerParams['Accept'] = $_header_accept;
        }
        $headerParams['Content-Type'] = ApiClient::selectHeaderContentType(array());
  
        // query params
        if ($request_id !== null) {
            $queryParams['requestId'] = $this->apiClient->getSerializer()->toQueryValue($request_id);
        }// query params
        if ($callback !== null) {
            $queryParams['callback'] = $this->apiClient->getSerializer()->toQueryValue($callback);
        }
        
        
        
        
  
        // for model (json/xml)
        if (isset($_tempBody)) {
            $httpBody = $_tempBody; // $_tempBody is the method argument, if present
        } else if (count($formParams) > 0) {
            $httpBody = $formParams; // for HTTP post (form)
        }
        
        $apiKey = $this->apiClient->getApiKeyWithPrefix('Authorization');
        if (isset($apiKey)) {
            $headerParams['Authorization'] = $apiKey;
        }
        
        
        
        $apiKey = $this->apiClient->getApiKeyWithPrefix('key');
        if (isset($apiKey)) {
            $queryParams['key'] = $apiKey;
        }
        
        
        
        // make the API Call
        try
        {
            list($response, $httpHeader) = $this->apiClient->callApi(
                $resourcePath, $method,
                $queryParams, $httpBody,
                $headerParams, '\Systran\Client\Model\TranslationStatus'
            );
            
            if (!$response) {
                return null;
            }

            return $this->apiClient->getSerializer()->deserialize($response, '\Systran\Client\Model\TranslationStatus', $httpHeader);
            
        } catch (ApiException $e) {
            switch ($e->getCode()) { 
            case 200:
                $data = $this->apiClient->getSerializer()->deserialize($e->getResponseBody(), '\Systran\Client\Model\TranslationStatus', $e->getResponseHeaders());
                $e->setResponseObject($data);
                break;
            }
  
            throw $e;
        }
        
        return null;
        
    }
    
    /**
     * translationFileTranslatePost
     *
     * Translate File
     *
     * @param \SplFileObject $input Input file (required)
     * @param string $target Target language code ([details](#description_langage_code_values)) (required)
     * @param string $source Source language code ([details](#description_langage_code_values)) or `auto`.\n\nWhen the value is set to `auto`, the language will be automatically detected, used to enhance the translation, and returned in output. (optional)
     * @param string $format Format of the source text.\n\nValid values are `text` for plain text, `html` for HTML pages, and `auto` for automatic detection. The MIME type of file format supported by SYSTRAN can also be used (application/vnd.openxmlformats, application/vnd.oasis.opendocument, ...) (optional)
     * @param int $profile Profile id (optional)
     * @param bool $with_source If `true`, the source will also be sent back in the response message. It can be useful when used with the withAnnotations option to align the source document with the translated document (optional)
     * @param bool $with_annotations If `true`, different annotations will be provided in the translated document. If the option &#39;withSource&#39; is used, the annotations will also be provided in the source document. It will provide segments, tokens, not found words,... (optional)
     * @param string $with_dictionary User Dictionary or/and Normalization Dictionary ids to be applied to the translation result. Each dictionary &#39;id&#39; has to be separate by a comma. (optional)
     * @param string $with_corpus Corpus to be applied to the translation result. Each corpus &#39;id&#39; has to be separate by a comma. (optional)
     * @param string[] $options Additional options.\n\nAn option can be a JSON object containing a set of key/value generic options supported by the translator. It can also be a string with the syntax &#39;&lt;key&gt;:&lt;value&gt;&#39; to pass a key/value generic option to the translator. (optional)
     * @param string $encoding Encoding. `base64` can be useful to send binary documents in the JSON body. Please note that another alternative is to use translateFile (optional)
     * @param bool $async If `true`, the translation is performed asynchronously.\n\nThe \&quot;/translation/file/status\&quot; service must be used to wait for the completion of the request and the \&quot;/translation/file/result\&quot; service must be used to get the final result. The \&quot;/translation/file/cancel\&quot; can be used to cancel the request. (optional)
     * @param string $batch_id Batch Identifier (optional)
     * @param string $callback Javascript callback function name for JSONP Support (optional)
     * @return \Systran\Client\Model\TranslationFileResponse
     * @throws \Systran\Client\ApiException on non-2xx response
     */
    public function translationFileTranslatePost($input, $target, $source=null, $format=null, $profile=null, $with_source=null, $with_annotations=null, $with_dictionary=null, $with_corpus=null, $options=null, $encoding=null, $async=null, $batch_id=null, $callback=null)
    {
        error_log($input);
        // verify the required parameter 'input' is set
        if ($input === null) {
            throw new \InvalidArgumentException('Missing the required parameter $input when calling translationFileTranslatePost');
        }
        // verify the required parameter 'target' is set
        if ($target === null) {
            throw new \InvalidArgumentException('Missing the required parameter $target when calling translationFileTranslatePost');
        }
  
        // parse inputs
        $resourcePath = "/translation/file/translate";
        $resourcePath = str_replace("{format}", "json", $resourcePath);
        $method = "POST";
        $httpBody = '';
        $queryParams = array();
        $headerParams = array();
        $formParams = array();
        $_header_accept = ApiClient::selectHeaderAccept(array('application/json', 'multipart/mixed', '*/*'));
        if (!is_null($_header_accept)) {
            $headerParams['Accept'] = $_header_accept;
        }
        $headerParams['Content-Type'] = ApiClient::selectHeaderContentType(array('*/*','','*/*'));
  
        // query params
        if ($source !== null) {
            $queryParams['source'] = $this->apiClient->getSerializer()->toQueryValue($source);
        }// query params
        if ($target !== null) {
            $queryParams['target'] = $this->apiClient->getSerializer()->toQueryValue($target);
        }// query params
        if ($format !== null) {
            $queryParams['format'] = $this->apiClient->getSerializer()->toQueryValue($format);
        }// query params
        if ($profile !== null) {
            $queryParams['profile'] = $this->apiClient->getSerializer()->toQueryValue($profile);
        }// query params
        if ($with_source !== null) {
            $queryParams['withSource'] = $this->apiClient->getSerializer()->toQueryValue($with_source);
        }// query params
        if ($with_annotations !== null) {
            $queryParams['withAnnotations'] = $this->apiClient->getSerializer()->toQueryValue($with_annotations);
        }// query params
        if ($with_dictionary !== null) {
            $queryParams['withDictionary'] = $this->apiClient->getSerializer()->toQueryValue($with_dictionary);
        }// query params
        if ($with_corpus !== null) {
            $queryParams['withCorpus'] = $this->apiClient->getSerializer()->toQueryValue($with_corpus);
        }// query params
        if ($options !== null) {
            $queryParams['options'] = $this->apiClient->getSerializer()->toQueryValue($options);
        }// query params
        if ($encoding !== null) {
            $queryParams['encoding'] = $this->apiClient->getSerializer()->toQueryValue($encoding);
        }// query params
        if ($async !== null) {
            $queryParams['async'] = $this->apiClient->getSerializer()->toQueryValue($async);
        }// query params
        if ($batch_id !== null) {
            $queryParams['batchId'] = $this->apiClient->getSerializer()->toQueryValue($batch_id);
        }// query params
        if ($callback !== null) {
            $queryParams['callback'] = $this->apiClient->getSerializer()->toQueryValue($callback);
        }
        
        
        // form params
        if ($input !== null) {

            if (function_exists('curl_file_create')) {
                $formParams['input'] = new \CurlFile($input->getRealPath());
            }
            else
                $formParams['input'] = '@' . $this->apiClient->getSerializer()->toFormValue($input);
            $headerParams['Content-Type'] = ApiClient::selectHeaderContentType(array('multipart/form-data','','*/*'));

        }
        //error_log($formParams['input']);


        // for model (json/xml)
        if (isset($_tempBody)) {
            $httpBody = $_tempBody; // $_tempBody is the method argument, if present
        } else if (count($formParams) > 0) {
            $httpBody = $formParams; // for HTTP post (form)
        }
        
        $apiKey = $this->apiClient->getApiKeyWithPrefix('Authorization');
        if (isset($apiKey)) {
            $headerParams['Authorization'] = $apiKey;
        }
        
        
        
        $apiKey = $this->apiClient->getApiKeyWithPrefix('key');
        if (isset($apiKey)) {
            $queryParams['key'] = $apiKey;
        }
        
        
        
        // make the API Call
        try
        {
            list($response, $httpHeader) = $this->apiClient->callApi(
                $resourcePath, $method,
                $queryParams, $httpBody,
                $headerParams, '\Systran\Client\Model\TranslationFileResponse'
            );
            
            if (!$response) {
                return null;
            }

            return $this->apiClient->getSerializer()->deserialize($response, '\Systran\Client\Model\TranslationFileResponse', $httpHeader);
            
        } catch (ApiException $e) {
            switch ($e->getCode()) { 
            case 200:
                $data = $this->apiClient->getSerializer()->deserialize($e->getResponseBody(), '\Systran\Client\Model\TranslationFileResponse', $e->getResponseHeaders());
                $e->setResponseObject($data);
                break;
            }
  
            throw $e;
        }
        
        return null;
        
    }
    
    /**
     * translationProfileGet
     *
     * List of profiles
     *
     * @param string $source Source language code of the profile (optional)
     * @param string $target Target Language code of the profile (optional)
     * @param int[] $id Identifier of the profile (optional)
     * @param string $callback Javascript callback function name for JSONP Support (optional)
     * @return \Systran\Client\Model\ProfilesResponse
     * @throws \Systran\Client\ApiException on non-2xx response
     */
    public function translationProfileGet($source=null, $target=null, $id=null, $callback=null)
    {
        
  
        // parse inputs
        $resourcePath = "/translation/profile";
        $resourcePath = str_replace("{format}", "json", $resourcePath);
        $method = "GET";
        $httpBody = '';
        $queryParams = array();
        $headerParams = array();
        $formParams = array();
        $_header_accept = ApiClient::selectHeaderAccept(array('application/json'));
        if (!is_null($_header_accept)) {
            $headerParams['Accept'] = $_header_accept;
        }
        $headerParams['Content-Type'] = ApiClient::selectHeaderContentType(array());
  
        // query params
        if ($source !== null) {
            $queryParams['source'] = $this->apiClient->getSerializer()->toQueryValue($source);
        }// query params
        if ($target !== null) {
            $queryParams['target'] = $this->apiClient->getSerializer()->toQueryValue($target);
        }// query params
        if ($id !== null) {
            $queryParams['id'] = $this->apiClient->getSerializer()->toQueryValue($id);
        }// query params
        if ($callback !== null) {
            $queryParams['callback'] = $this->apiClient->getSerializer()->toQueryValue($callback);
        }
        
        
        
        
  
        // for model (json/xml)
        if (isset($_tempBody)) {
            $httpBody = $_tempBody; // $_tempBody is the method argument, if present
        } else if (count($formParams) > 0) {
            $httpBody = $formParams; // for HTTP post (form)
        }

        $apiKey = $this->apiClient->getApiKeyWithPrefix('Authorization');
        if (isset($apiKey)) {
            $headerParams['Authorization'] = $apiKey;
        }
        
        
        
        $apiKey = $this->apiClient->getApiKeyWithPrefix('key');
        if (isset($apiKey)) {
            $queryParams['key'] = $apiKey;
        }
        
        
        
        // make the API Call
        try
        {
            list($response, $httpHeader) = $this->apiClient->callApi(
                $resourcePath, $method,
                $queryParams, $httpBody,
                $headerParams, '\Systran\Client\Model\ProfilesResponse'
            );
            
            if (!$response) {
                return null;
            }

            return $this->apiClient->getSerializer()->deserialize($response, '\Systran\Client\Model\ProfilesResponse', $httpHeader);
            
        } catch (ApiException $e) {
            switch ($e->getCode()) { 
            case 200:
                $data = $this->apiClient->getSerializer()->deserialize($e->getResponseBody(), '\Systran\Client\Model\ProfilesResponse', $e->getResponseHeaders());
                $e->setResponseObject($data);
                break;
            }
  
            throw $e;
        }
        
        return null;
        
    }
    
    /**
     * translationSupportedLanguagesGet
     *
     * Supported Languages
     *
     * @param string[] $source Language code of the source text (optional)
     * @param string[] $target Language code into which to translate the source text (optional)
     * @param string $callback Javascript callback function name for JSONP Support (optional)
     * @return \Systran\Client\Model\SupportedLanguageResponse
     * @throws \Systran\Client\ApiException on non-2xx response
     */
    public function translationSupportedLanguagesGet($source=null, $target=null, $callback=null)
    {
        
  
        // parse inputs
        $resourcePath = "/translation/supportedLanguages";
        $resourcePath = str_replace("{format}", "json", $resourcePath);
        $method = "GET";
        $httpBody = '';
        $queryParams = array();
        $headerParams = array();
        $formParams = array();
        $_header_accept = ApiClient::selectHeaderAccept(array('application/json'));
        if (!is_null($_header_accept)) {
            $headerParams['Accept'] = $_header_accept;
        }
        $headerParams['Content-Type'] = ApiClient::selectHeaderContentType(array());
  
        // query params
        if ($source !== null) {
            $queryParams['source'] = $this->apiClient->getSerializer()->toQueryValue($source);
        }// query params
        if ($target !== null) {
            $queryParams['target'] = $this->apiClient->getSerializer()->toQueryValue($target);
        }// query params
        if ($callback !== null) {
            $queryParams['callback'] = $this->apiClient->getSerializer()->toQueryValue($callback);
        }
        
        
        
        
  
        // for model (json/xml)
        if (isset($_tempBody)) {
            $httpBody = $_tempBody; // $_tempBody is the method argument, if present
        } else if (count($formParams) > 0) {
            $httpBody = $formParams; // for HTTP post (form)
        }
        
        $apiKey = $this->apiClient->getApiKeyWithPrefix('Authorization');
        if (isset($apiKey)) {
            $headerParams['Authorization'] = $apiKey;
        }
        
        
        
        $apiKey = $this->apiClient->getApiKeyWithPrefix('key');
        if (isset($apiKey)) {
            $queryParams['key'] = $apiKey;
        }
        
        
        
        // make the API Call
        try
        {
            list($response, $httpHeader) = $this->apiClient->callApi(
                $resourcePath, $method,
                $queryParams, $httpBody,
                $headerParams, '\Systran\Client\Model\SupportedLanguageResponse'
            );
            
            if (!$response) {
                return null;
            }

            return $this->apiClient->getSerializer()->deserialize($response, '\Systran\Client\Model\SupportedLanguageResponse', $httpHeader);
            
        } catch (ApiException $e) {
            switch ($e->getCode()) { 
            case 200:
                $data = $this->apiClient->getSerializer()->deserialize($e->getResponseBody(), '\Systran\Client\Model\SupportedLanguageResponse', $e->getResponseHeaders());
                $e->setResponseObject($data);
                break;
            }
  
            throw $e;
        }
        
        return null;
        
    }
    
    /**
     * translationTextTranslatePost
     *
     * Translate
     *
     * @param string[] $input Input text (this parameter can be repeated) (required)
     * @param string $target Target language code ([details](#description_langage_code_values)) (required)
     * @param string $source Source language code ([details](#description_langage_code_values)) or `auto`.\n\nWhen the value is set to `auto`, the language will be automatically detected, used to enhance the translation, and returned in output. (optional)
     * @param string $format Format of the source text.\n\nValid values are `text` for plain text, `html` for HTML pages, and `auto` for automatic detection. The MIME type of file format supported by SYSTRAN can also be used (application/vnd.openxmlformats, application/vnd.oasis.opendocument, ...) (optional)
     * @param int $profile Profile id (optional)
     * @param bool $with_source If `true`, the source will also be sent back in the response message. It can be useful when used with the withAnnotations option to align the source document with the translated document (optional)
     * @param bool $with_annotations If `true`, different annotations will be provided in the translated document. If the option &#39;withSource&#39; is used, the annotations will also be provided in the source document. It will provide segments, tokens, not found words,... (optional)
     * @param string $with_dictionary User Dictionary or/and Normalization Dictionary ids to be applied to the translation result. Each dictionary &#39;id&#39; has to be separate by a comma. (optional)
     * @param string $with_corpus Corpus to be applied to the translation result. Each corpus &#39;id&#39; has to be separate by a comma. (optional)
     * @param bool $back_translation If `true`, the translated text will be translated back in source language (optional)
     * @param string[] $options Additional options.\n\nAn option can be a JSON object containing a set of key/value generic options supported by the translator. It can also be a string with the syntax &#39;&lt;key&gt;:&lt;value&gt;&#39; to pass a key/value generic option to the translator. (optional)
     * @param string $encoding Encoding. `base64` can be useful to send binary documents in the JSON body. Please note that another alternative is to use translateFile (optional)
     * @param string $callback Javascript callback function name for JSONP Support (optional)
     * @return \Systran\Client\Model\TranslationResponse
     * @throws \Systran\Client\ApiException on non-2xx response
     */
    public function translationTextTranslatePost($input, $target, $source=null, $format=null, $profile=null, $with_source=null, $with_annotations=null, $with_dictionary=null, $with_corpus=null, $back_translation=null, $options=null, $encoding=null, $callback=null)
    {
        
        // verify the required parameter 'input' is set
        if ($input === null) {
            throw new \InvalidArgumentException('Missing the required parameter $input when calling translationTextTranslatePost');
        }
        // verify the required parameter 'target' is set
        if ($target === null) {
            throw new \InvalidArgumentException('Missing the required parameter $target when calling translationTextTranslatePost');
        }
  
        // parse inputs
        $resourcePath = "/translation/text/translate";
        $resourcePath = str_replace("{format}", "json", $resourcePath);
        $method = "POST";
        $httpBody = '';
        $queryParams = array();
        $headerParams = array();
        $formParams = array();
        $_header_accept = ApiClient::selectHeaderAccept(array('application/json'));
        if (!is_null($_header_accept)) {
            $headerParams['Accept'] = $_header_accept;
        }
        $headerParams['Content-Type'] = ApiClient::selectHeaderContentType(array());
  
        // query params
        if ($input !== null) {
            $queryParams['input'] = $this->apiClient->getSerializer()->toQueryValue($input);
        }// query params
        if ($source !== null) {
            $queryParams['source'] = $this->apiClient->getSerializer()->toQueryValue($source);
        }// query params
        if ($target !== null) {
            $queryParams['target'] = $this->apiClient->getSerializer()->toQueryValue($target);
        }// query params
        if ($format !== null) {
            $queryParams['format'] = $this->apiClient->getSerializer()->toQueryValue($format);
        }// query params
        if ($profile !== null) {
            $queryParams['profile'] = $this->apiClient->getSerializer()->toQueryValue($profile);
        }// query params
        if ($with_source !== null) {
            $queryParams['withSource'] = $this->apiClient->getSerializer()->toQueryValue($with_source);
        }// query params
        if ($with_annotations !== null) {
            $queryParams['withAnnotations'] = $this->apiClient->getSerializer()->toQueryValue($with_annotations);
        }// query params
        if ($with_dictionary !== null) {
            $queryParams['withDictionary'] = $this->apiClient->getSerializer()->toQueryValue($with_dictionary);
        }// query params
        if ($with_corpus !== null) {
            $queryParams['withCorpus'] = $this->apiClient->getSerializer()->toQueryValue($with_corpus);
        }// query params
        if ($back_translation !== null) {
            $queryParams['backTranslation'] = $this->apiClient->getSerializer()->toQueryValue($back_translation);
        }// query params
        if ($options !== null) {
            $queryParams['options'] = $this->apiClient->getSerializer()->toQueryValue($options);
        }// query params
        if ($encoding !== null) {
            $queryParams['encoding'] = $this->apiClient->getSerializer()->toQueryValue($encoding);
        }// query params
        if ($callback !== null) {
            $queryParams['callback'] = $this->apiClient->getSerializer()->toQueryValue($callback);
        }
        
        
        
        
  
        // for model (json/xml)
        if (isset($_tempBody)) {
            $httpBody = $_tempBody; // $_tempBody is the method argument, if present
        } else if (count($formParams) > 0) {
            $httpBody = $formParams; // for HTTP post (form)
        }
        
        $apiKey = $this->apiClient->getApiKeyWithPrefix('Authorization');
        if (isset($apiKey)) {
            $headerParams['Authorization'] = $apiKey;
        }
        
        
        
        $apiKey = $this->apiClient->getApiKeyWithPrefix('key');
        if (isset($apiKey)) {
            $queryParams['key'] = $apiKey;
        }
        
        
        
        // make the API Call
        try
        {
            list($response, $httpHeader) = $this->apiClient->callApi(
                $resourcePath, $method,
                $queryParams, $httpBody,
                $headerParams, '\Systran\Client\Model\TranslationResponse'
            );
            
            if (!$response) {
                return null;
            }

            return $this->apiClient->getSerializer()->deserialize($response, '\Systran\Client\Model\TranslationResponse', $httpHeader);
            
        } catch (ApiException $e) {
            switch ($e->getCode()) { 
            case 200:
                $data = $this->apiClient->getSerializer()->deserialize($e->getResponseBody(), '\Systran\Client\Model\TranslationResponse', $e->getResponseHeaders());
                $e->setResponseObject($data);
                break;
            }
  
            throw $e;
        }
        
        return null;
        
    }
    
}
