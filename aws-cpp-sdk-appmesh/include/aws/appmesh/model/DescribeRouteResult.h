﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/RouteData.h>
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
namespace AppMesh
{
namespace Model
{
  /**
   * <zonbook></zonbook><xhtml></xhtml><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeRouteOutput">AWS
   * API Reference</a></p>
   */
  class DescribeRouteResult
  {
  public:
    AWS_APPMESH_API DescribeRouteResult();
    AWS_APPMESH_API DescribeRouteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API DescribeRouteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full description of your route.</p>
     */
    inline const RouteData& GetRoute() const{ return m_route; }

    /**
     * <p>The full description of your route.</p>
     */
    inline void SetRoute(const RouteData& value) { m_route = value; }

    /**
     * <p>The full description of your route.</p>
     */
    inline void SetRoute(RouteData&& value) { m_route = std::move(value); }

    /**
     * <p>The full description of your route.</p>
     */
    inline DescribeRouteResult& WithRoute(const RouteData& value) { SetRoute(value); return *this;}

    /**
     * <p>The full description of your route.</p>
     */
    inline DescribeRouteResult& WithRoute(RouteData&& value) { SetRoute(std::move(value)); return *this;}

  private:

    RouteData m_route;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
