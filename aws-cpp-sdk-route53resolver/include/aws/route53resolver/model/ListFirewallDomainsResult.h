﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Route53Resolver
{
namespace Model
{
  class ListFirewallDomainsResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListFirewallDomainsResult();
    AWS_ROUTE53RESOLVER_API ListFirewallDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListFirewallDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline ListFirewallDomainsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline ListFirewallDomainsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline ListFirewallDomainsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of the domains in the firewall domain list. </p> <p>This might be a
     * partial list of the domains that you've defined in the domain list. For
     * information, see <code>MaxResults</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDomains() const{ return m_domains; }

    /**
     * <p>A list of the domains in the firewall domain list. </p> <p>This might be a
     * partial list of the domains that you've defined in the domain list. For
     * information, see <code>MaxResults</code>. </p>
     */
    inline void SetDomains(const Aws::Vector<Aws::String>& value) { m_domains = value; }

    /**
     * <p>A list of the domains in the firewall domain list. </p> <p>This might be a
     * partial list of the domains that you've defined in the domain list. For
     * information, see <code>MaxResults</code>. </p>
     */
    inline void SetDomains(Aws::Vector<Aws::String>&& value) { m_domains = std::move(value); }

    /**
     * <p>A list of the domains in the firewall domain list. </p> <p>This might be a
     * partial list of the domains that you've defined in the domain list. For
     * information, see <code>MaxResults</code>. </p>
     */
    inline ListFirewallDomainsResult& WithDomains(const Aws::Vector<Aws::String>& value) { SetDomains(value); return *this;}

    /**
     * <p>A list of the domains in the firewall domain list. </p> <p>This might be a
     * partial list of the domains that you've defined in the domain list. For
     * information, see <code>MaxResults</code>. </p>
     */
    inline ListFirewallDomainsResult& WithDomains(Aws::Vector<Aws::String>&& value) { SetDomains(std::move(value)); return *this;}

    /**
     * <p>A list of the domains in the firewall domain list. </p> <p>This might be a
     * partial list of the domains that you've defined in the domain list. For
     * information, see <code>MaxResults</code>. </p>
     */
    inline ListFirewallDomainsResult& AddDomains(const Aws::String& value) { m_domains.push_back(value); return *this; }

    /**
     * <p>A list of the domains in the firewall domain list. </p> <p>This might be a
     * partial list of the domains that you've defined in the domain list. For
     * information, see <code>MaxResults</code>. </p>
     */
    inline ListFirewallDomainsResult& AddDomains(Aws::String&& value) { m_domains.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the domains in the firewall domain list. </p> <p>This might be a
     * partial list of the domains that you've defined in the domain list. For
     * information, see <code>MaxResults</code>. </p>
     */
    inline ListFirewallDomainsResult& AddDomains(const char* value) { m_domains.push_back(value); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Aws::String> m_domains;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
