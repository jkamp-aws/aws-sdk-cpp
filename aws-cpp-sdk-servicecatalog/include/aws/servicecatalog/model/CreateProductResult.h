﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ProductViewDetail.h>
#include <aws/servicecatalog/model/ProvisioningArtifactDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/Tag.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class CreateProductResult
  {
  public:
    AWS_SERVICECATALOG_API CreateProductResult();
    AWS_SERVICECATALOG_API CreateProductResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API CreateProductResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the product view.</p>
     */
    inline const ProductViewDetail& GetProductViewDetail() const{ return m_productViewDetail; }

    /**
     * <p>Information about the product view.</p>
     */
    inline void SetProductViewDetail(const ProductViewDetail& value) { m_productViewDetail = value; }

    /**
     * <p>Information about the product view.</p>
     */
    inline void SetProductViewDetail(ProductViewDetail&& value) { m_productViewDetail = std::move(value); }

    /**
     * <p>Information about the product view.</p>
     */
    inline CreateProductResult& WithProductViewDetail(const ProductViewDetail& value) { SetProductViewDetail(value); return *this;}

    /**
     * <p>Information about the product view.</p>
     */
    inline CreateProductResult& WithProductViewDetail(ProductViewDetail&& value) { SetProductViewDetail(std::move(value)); return *this;}


    /**
     * <p>Information about the provisioning artifact. </p>
     */
    inline const ProvisioningArtifactDetail& GetProvisioningArtifactDetail() const{ return m_provisioningArtifactDetail; }

    /**
     * <p>Information about the provisioning artifact. </p>
     */
    inline void SetProvisioningArtifactDetail(const ProvisioningArtifactDetail& value) { m_provisioningArtifactDetail = value; }

    /**
     * <p>Information about the provisioning artifact. </p>
     */
    inline void SetProvisioningArtifactDetail(ProvisioningArtifactDetail&& value) { m_provisioningArtifactDetail = std::move(value); }

    /**
     * <p>Information about the provisioning artifact. </p>
     */
    inline CreateProductResult& WithProvisioningArtifactDetail(const ProvisioningArtifactDetail& value) { SetProvisioningArtifactDetail(value); return *this;}

    /**
     * <p>Information about the provisioning artifact. </p>
     */
    inline CreateProductResult& WithProvisioningArtifactDetail(ProvisioningArtifactDetail&& value) { SetProvisioningArtifactDetail(std::move(value)); return *this;}


    /**
     * <p>Information about the tags associated with the product.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Information about the tags associated with the product.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>Information about the tags associated with the product.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>Information about the tags associated with the product.</p>
     */
    inline CreateProductResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Information about the tags associated with the product.</p>
     */
    inline CreateProductResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Information about the tags associated with the product.</p>
     */
    inline CreateProductResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Information about the tags associated with the product.</p>
     */
    inline CreateProductResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    ProductViewDetail m_productViewDetail;

    ProvisioningArtifactDetail m_provisioningArtifactDetail;

    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
