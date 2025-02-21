﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mobile/Mobile_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mobile/model/Resource.h>
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
namespace Mobile
{
namespace Model
{
  /**
   * <p> Result structure used in response to request to delete a project.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/DeleteProjectResult">AWS
   * API Reference</a></p>
   */
  class DeleteProjectResult
  {
  public:
    AWS_MOBILE_API DeleteProjectResult();
    AWS_MOBILE_API DeleteProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MOBILE_API DeleteProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Resources which were deleted. </p>
     */
    inline const Aws::Vector<Resource>& GetDeletedResources() const{ return m_deletedResources; }

    /**
     * <p> Resources which were deleted. </p>
     */
    inline void SetDeletedResources(const Aws::Vector<Resource>& value) { m_deletedResources = value; }

    /**
     * <p> Resources which were deleted. </p>
     */
    inline void SetDeletedResources(Aws::Vector<Resource>&& value) { m_deletedResources = std::move(value); }

    /**
     * <p> Resources which were deleted. </p>
     */
    inline DeleteProjectResult& WithDeletedResources(const Aws::Vector<Resource>& value) { SetDeletedResources(value); return *this;}

    /**
     * <p> Resources which were deleted. </p>
     */
    inline DeleteProjectResult& WithDeletedResources(Aws::Vector<Resource>&& value) { SetDeletedResources(std::move(value)); return *this;}

    /**
     * <p> Resources which were deleted. </p>
     */
    inline DeleteProjectResult& AddDeletedResources(const Resource& value) { m_deletedResources.push_back(value); return *this; }

    /**
     * <p> Resources which were deleted. </p>
     */
    inline DeleteProjectResult& AddDeletedResources(Resource&& value) { m_deletedResources.push_back(std::move(value)); return *this; }


    /**
     * <p> Resources which were not deleted, due to a risk of losing potentially
     * important data or files. </p>
     */
    inline const Aws::Vector<Resource>& GetOrphanedResources() const{ return m_orphanedResources; }

    /**
     * <p> Resources which were not deleted, due to a risk of losing potentially
     * important data or files. </p>
     */
    inline void SetOrphanedResources(const Aws::Vector<Resource>& value) { m_orphanedResources = value; }

    /**
     * <p> Resources which were not deleted, due to a risk of losing potentially
     * important data or files. </p>
     */
    inline void SetOrphanedResources(Aws::Vector<Resource>&& value) { m_orphanedResources = std::move(value); }

    /**
     * <p> Resources which were not deleted, due to a risk of losing potentially
     * important data or files. </p>
     */
    inline DeleteProjectResult& WithOrphanedResources(const Aws::Vector<Resource>& value) { SetOrphanedResources(value); return *this;}

    /**
     * <p> Resources which were not deleted, due to a risk of losing potentially
     * important data or files. </p>
     */
    inline DeleteProjectResult& WithOrphanedResources(Aws::Vector<Resource>&& value) { SetOrphanedResources(std::move(value)); return *this;}

    /**
     * <p> Resources which were not deleted, due to a risk of losing potentially
     * important data or files. </p>
     */
    inline DeleteProjectResult& AddOrphanedResources(const Resource& value) { m_orphanedResources.push_back(value); return *this; }

    /**
     * <p> Resources which were not deleted, due to a risk of losing potentially
     * important data or files. </p>
     */
    inline DeleteProjectResult& AddOrphanedResources(Resource&& value) { m_orphanedResources.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Resource> m_deletedResources;

    Aws::Vector<Resource> m_orphanedResources;
  };

} // namespace Model
} // namespace Mobile
} // namespace Aws
