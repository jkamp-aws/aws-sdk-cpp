﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/Volume.h>
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
namespace FSx
{
namespace Model
{
  class CreateVolumeFromBackupResult
  {
  public:
    AWS_FSX_API CreateVolumeFromBackupResult();
    AWS_FSX_API CreateVolumeFromBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API CreateVolumeFromBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returned after a successful <code>CreateVolumeFromBackup</code> API
     * operation, describing the volume just created.</p>
     */
    inline const Volume& GetVolume() const{ return m_volume; }

    /**
     * <p>Returned after a successful <code>CreateVolumeFromBackup</code> API
     * operation, describing the volume just created.</p>
     */
    inline void SetVolume(const Volume& value) { m_volume = value; }

    /**
     * <p>Returned after a successful <code>CreateVolumeFromBackup</code> API
     * operation, describing the volume just created.</p>
     */
    inline void SetVolume(Volume&& value) { m_volume = std::move(value); }

    /**
     * <p>Returned after a successful <code>CreateVolumeFromBackup</code> API
     * operation, describing the volume just created.</p>
     */
    inline CreateVolumeFromBackupResult& WithVolume(const Volume& value) { SetVolume(value); return *this;}

    /**
     * <p>Returned after a successful <code>CreateVolumeFromBackup</code> API
     * operation, describing the volume just created.</p>
     */
    inline CreateVolumeFromBackupResult& WithVolume(Volume&& value) { SetVolume(std::move(value)); return *this;}

  private:

    Volume m_volume;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
