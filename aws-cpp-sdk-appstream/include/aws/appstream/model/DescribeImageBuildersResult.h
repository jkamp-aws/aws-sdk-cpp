﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/ImageBuilder.h>
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
namespace AppStream
{
namespace Model
{
  class DescribeImageBuildersResult
  {
  public:
    AWS_APPSTREAM_API DescribeImageBuildersResult();
    AWS_APPSTREAM_API DescribeImageBuildersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API DescribeImageBuildersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the image builders.</p>
     */
    inline const Aws::Vector<ImageBuilder>& GetImageBuilders() const{ return m_imageBuilders; }

    /**
     * <p>Information about the image builders.</p>
     */
    inline void SetImageBuilders(const Aws::Vector<ImageBuilder>& value) { m_imageBuilders = value; }

    /**
     * <p>Information about the image builders.</p>
     */
    inline void SetImageBuilders(Aws::Vector<ImageBuilder>&& value) { m_imageBuilders = std::move(value); }

    /**
     * <p>Information about the image builders.</p>
     */
    inline DescribeImageBuildersResult& WithImageBuilders(const Aws::Vector<ImageBuilder>& value) { SetImageBuilders(value); return *this;}

    /**
     * <p>Information about the image builders.</p>
     */
    inline DescribeImageBuildersResult& WithImageBuilders(Aws::Vector<ImageBuilder>&& value) { SetImageBuilders(std::move(value)); return *this;}

    /**
     * <p>Information about the image builders.</p>
     */
    inline DescribeImageBuildersResult& AddImageBuilders(const ImageBuilder& value) { m_imageBuilders.push_back(value); return *this; }

    /**
     * <p>Information about the image builders.</p>
     */
    inline DescribeImageBuildersResult& AddImageBuilders(ImageBuilder&& value) { m_imageBuilders.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeImageBuildersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeImageBuildersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeImageBuildersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ImageBuilder> m_imageBuilders;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
