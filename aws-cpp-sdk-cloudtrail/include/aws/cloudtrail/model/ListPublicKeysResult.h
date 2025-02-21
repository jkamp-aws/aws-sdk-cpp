﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/PublicKey.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudTrail
{
namespace Model
{
  /**
   * <p>Returns the objects or data listed below if successful. Otherwise, returns an
   * error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListPublicKeysResponse">AWS
   * API Reference</a></p>
   */
  class ListPublicKeysResult
  {
  public:
    AWS_CLOUDTRAIL_API ListPublicKeysResult();
    AWS_CLOUDTRAIL_API ListPublicKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API ListPublicKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains an array of PublicKey objects.</p>  <p>The returned public
     * keys may have validity time ranges that overlap.</p> 
     */
    inline const Aws::Vector<PublicKey>& GetPublicKeyList() const{ return m_publicKeyList; }

    /**
     * <p>Contains an array of PublicKey objects.</p>  <p>The returned public
     * keys may have validity time ranges that overlap.</p> 
     */
    inline void SetPublicKeyList(const Aws::Vector<PublicKey>& value) { m_publicKeyList = value; }

    /**
     * <p>Contains an array of PublicKey objects.</p>  <p>The returned public
     * keys may have validity time ranges that overlap.</p> 
     */
    inline void SetPublicKeyList(Aws::Vector<PublicKey>&& value) { m_publicKeyList = std::move(value); }

    /**
     * <p>Contains an array of PublicKey objects.</p>  <p>The returned public
     * keys may have validity time ranges that overlap.</p> 
     */
    inline ListPublicKeysResult& WithPublicKeyList(const Aws::Vector<PublicKey>& value) { SetPublicKeyList(value); return *this;}

    /**
     * <p>Contains an array of PublicKey objects.</p>  <p>The returned public
     * keys may have validity time ranges that overlap.</p> 
     */
    inline ListPublicKeysResult& WithPublicKeyList(Aws::Vector<PublicKey>&& value) { SetPublicKeyList(std::move(value)); return *this;}

    /**
     * <p>Contains an array of PublicKey objects.</p>  <p>The returned public
     * keys may have validity time ranges that overlap.</p> 
     */
    inline ListPublicKeysResult& AddPublicKeyList(const PublicKey& value) { m_publicKeyList.push_back(value); return *this; }

    /**
     * <p>Contains an array of PublicKey objects.</p>  <p>The returned public
     * keys may have validity time ranges that overlap.</p> 
     */
    inline ListPublicKeysResult& AddPublicKeyList(PublicKey&& value) { m_publicKeyList.push_back(std::move(value)); return *this; }


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline ListPublicKeysResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline ListPublicKeysResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline ListPublicKeysResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PublicKey> m_publicKeyList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
