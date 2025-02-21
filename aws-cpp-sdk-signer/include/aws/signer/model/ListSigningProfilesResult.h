﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signer/model/SigningProfile.h>
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
namespace signer
{
namespace Model
{
  class ListSigningProfilesResult
  {
  public:
    AWS_SIGNER_API ListSigningProfilesResult();
    AWS_SIGNER_API ListSigningProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIGNER_API ListSigningProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of profiles that are available in the AWS account. This includes
     * profiles with the status of <code>CANCELED</code> if the
     * <code>includeCanceled</code> parameter is set to <code>true</code>.</p>
     */
    inline const Aws::Vector<SigningProfile>& GetProfiles() const{ return m_profiles; }

    /**
     * <p>A list of profiles that are available in the AWS account. This includes
     * profiles with the status of <code>CANCELED</code> if the
     * <code>includeCanceled</code> parameter is set to <code>true</code>.</p>
     */
    inline void SetProfiles(const Aws::Vector<SigningProfile>& value) { m_profiles = value; }

    /**
     * <p>A list of profiles that are available in the AWS account. This includes
     * profiles with the status of <code>CANCELED</code> if the
     * <code>includeCanceled</code> parameter is set to <code>true</code>.</p>
     */
    inline void SetProfiles(Aws::Vector<SigningProfile>&& value) { m_profiles = std::move(value); }

    /**
     * <p>A list of profiles that are available in the AWS account. This includes
     * profiles with the status of <code>CANCELED</code> if the
     * <code>includeCanceled</code> parameter is set to <code>true</code>.</p>
     */
    inline ListSigningProfilesResult& WithProfiles(const Aws::Vector<SigningProfile>& value) { SetProfiles(value); return *this;}

    /**
     * <p>A list of profiles that are available in the AWS account. This includes
     * profiles with the status of <code>CANCELED</code> if the
     * <code>includeCanceled</code> parameter is set to <code>true</code>.</p>
     */
    inline ListSigningProfilesResult& WithProfiles(Aws::Vector<SigningProfile>&& value) { SetProfiles(std::move(value)); return *this;}

    /**
     * <p>A list of profiles that are available in the AWS account. This includes
     * profiles with the status of <code>CANCELED</code> if the
     * <code>includeCanceled</code> parameter is set to <code>true</code>.</p>
     */
    inline ListSigningProfilesResult& AddProfiles(const SigningProfile& value) { m_profiles.push_back(value); return *this; }

    /**
     * <p>A list of profiles that are available in the AWS account. This includes
     * profiles with the status of <code>CANCELED</code> if the
     * <code>includeCanceled</code> parameter is set to <code>true</code>.</p>
     */
    inline ListSigningProfilesResult& AddProfiles(SigningProfile&& value) { m_profiles.push_back(std::move(value)); return *this; }


    /**
     * <p>Value for specifying the next set of paginated results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Value for specifying the next set of paginated results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Value for specifying the next set of paginated results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Value for specifying the next set of paginated results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Value for specifying the next set of paginated results to return.</p>
     */
    inline ListSigningProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Value for specifying the next set of paginated results to return.</p>
     */
    inline ListSigningProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Value for specifying the next set of paginated results to return.</p>
     */
    inline ListSigningProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SigningProfile> m_profiles;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
