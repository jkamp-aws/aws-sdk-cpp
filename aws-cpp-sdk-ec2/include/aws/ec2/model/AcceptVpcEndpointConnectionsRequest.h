﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AcceptVpcEndpointConnectionsRequest : public EC2Request
  {
  public:
    AWS_EC2_API AcceptVpcEndpointConnectionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcceptVpcEndpointConnections"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline AcceptVpcEndpointConnectionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the VPC endpoint service.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    /**
     * <p>The ID of the VPC endpoint service.</p>
     */
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }

    /**
     * <p>The ID of the VPC endpoint service.</p>
     */
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    /**
     * <p>The ID of the VPC endpoint service.</p>
     */
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }

    /**
     * <p>The ID of the VPC endpoint service.</p>
     */
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    /**
     * <p>The ID of the VPC endpoint service.</p>
     */
    inline AcceptVpcEndpointConnectionsRequest& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    /**
     * <p>The ID of the VPC endpoint service.</p>
     */
    inline AcceptVpcEndpointConnectionsRequest& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC endpoint service.</p>
     */
    inline AcceptVpcEndpointConnectionsRequest& WithServiceId(const char* value) { SetServiceId(value); return *this;}


    /**
     * <p>The IDs of one or more interface VPC endpoints.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcEndpointIds() const{ return m_vpcEndpointIds; }

    /**
     * <p>The IDs of one or more interface VPC endpoints.</p>
     */
    inline bool VpcEndpointIdsHasBeenSet() const { return m_vpcEndpointIdsHasBeenSet; }

    /**
     * <p>The IDs of one or more interface VPC endpoints.</p>
     */
    inline void SetVpcEndpointIds(const Aws::Vector<Aws::String>& value) { m_vpcEndpointIdsHasBeenSet = true; m_vpcEndpointIds = value; }

    /**
     * <p>The IDs of one or more interface VPC endpoints.</p>
     */
    inline void SetVpcEndpointIds(Aws::Vector<Aws::String>&& value) { m_vpcEndpointIdsHasBeenSet = true; m_vpcEndpointIds = std::move(value); }

    /**
     * <p>The IDs of one or more interface VPC endpoints.</p>
     */
    inline AcceptVpcEndpointConnectionsRequest& WithVpcEndpointIds(const Aws::Vector<Aws::String>& value) { SetVpcEndpointIds(value); return *this;}

    /**
     * <p>The IDs of one or more interface VPC endpoints.</p>
     */
    inline AcceptVpcEndpointConnectionsRequest& WithVpcEndpointIds(Aws::Vector<Aws::String>&& value) { SetVpcEndpointIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of one or more interface VPC endpoints.</p>
     */
    inline AcceptVpcEndpointConnectionsRequest& AddVpcEndpointIds(const Aws::String& value) { m_vpcEndpointIdsHasBeenSet = true; m_vpcEndpointIds.push_back(value); return *this; }

    /**
     * <p>The IDs of one or more interface VPC endpoints.</p>
     */
    inline AcceptVpcEndpointConnectionsRequest& AddVpcEndpointIds(Aws::String&& value) { m_vpcEndpointIdsHasBeenSet = true; m_vpcEndpointIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of one or more interface VPC endpoints.</p>
     */
    inline AcceptVpcEndpointConnectionsRequest& AddVpcEndpointIds(const char* value) { m_vpcEndpointIdsHasBeenSet = true; m_vpcEndpointIds.push_back(value); return *this; }

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcEndpointIds;
    bool m_vpcEndpointIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
