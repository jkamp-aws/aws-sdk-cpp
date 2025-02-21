﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-data/IoTDataPlane_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTDataPlane
{
namespace Model
{
  class ListNamedShadowsForThingResult
  {
  public:
    AWS_IOTDATAPLANE_API ListNamedShadowsForThingResult();
    AWS_IOTDATAPLANE_API ListNamedShadowsForThingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTDATAPLANE_API ListNamedShadowsForThingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of shadows for the specified thing.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResults() const{ return m_results; }

    /**
     * <p>The list of shadows for the specified thing.</p>
     */
    inline void SetResults(const Aws::Vector<Aws::String>& value) { m_results = value; }

    /**
     * <p>The list of shadows for the specified thing.</p>
     */
    inline void SetResults(Aws::Vector<Aws::String>&& value) { m_results = std::move(value); }

    /**
     * <p>The list of shadows for the specified thing.</p>
     */
    inline ListNamedShadowsForThingResult& WithResults(const Aws::Vector<Aws::String>& value) { SetResults(value); return *this;}

    /**
     * <p>The list of shadows for the specified thing.</p>
     */
    inline ListNamedShadowsForThingResult& WithResults(Aws::Vector<Aws::String>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>The list of shadows for the specified thing.</p>
     */
    inline ListNamedShadowsForThingResult& AddResults(const Aws::String& value) { m_results.push_back(value); return *this; }

    /**
     * <p>The list of shadows for the specified thing.</p>
     */
    inline ListNamedShadowsForThingResult& AddResults(Aws::String&& value) { m_results.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of shadows for the specified thing.</p>
     */
    inline ListNamedShadowsForThingResult& AddResults(const char* value) { m_results.push_back(value); return *this; }


    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListNamedShadowsForThingResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListNamedShadowsForThingResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListNamedShadowsForThingResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The Epoch date and time the response was generated by IoT.</p>
     */
    inline long long GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The Epoch date and time the response was generated by IoT.</p>
     */
    inline void SetTimestamp(long long value) { m_timestamp = value; }

    /**
     * <p>The Epoch date and time the response was generated by IoT.</p>
     */
    inline ListNamedShadowsForThingResult& WithTimestamp(long long value) { SetTimestamp(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_results;

    Aws::String m_nextToken;

    long long m_timestamp;
  };

} // namespace Model
} // namespace IoTDataPlane
} // namespace Aws
