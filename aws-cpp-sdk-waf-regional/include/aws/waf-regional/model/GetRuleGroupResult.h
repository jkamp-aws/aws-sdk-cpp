﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/RuleGroup.h>
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
namespace WAFRegional
{
namespace Model
{
  class GetRuleGroupResult
  {
  public:
    AWS_WAFREGIONAL_API GetRuleGroupResult();
    AWS_WAFREGIONAL_API GetRuleGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API GetRuleGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the <a>RuleGroup</a> that you specified in the
     * <code>GetRuleGroup</code> request. </p>
     */
    inline const RuleGroup& GetRuleGroup() const{ return m_ruleGroup; }

    /**
     * <p>Information about the <a>RuleGroup</a> that you specified in the
     * <code>GetRuleGroup</code> request. </p>
     */
    inline void SetRuleGroup(const RuleGroup& value) { m_ruleGroup = value; }

    /**
     * <p>Information about the <a>RuleGroup</a> that you specified in the
     * <code>GetRuleGroup</code> request. </p>
     */
    inline void SetRuleGroup(RuleGroup&& value) { m_ruleGroup = std::move(value); }

    /**
     * <p>Information about the <a>RuleGroup</a> that you specified in the
     * <code>GetRuleGroup</code> request. </p>
     */
    inline GetRuleGroupResult& WithRuleGroup(const RuleGroup& value) { SetRuleGroup(value); return *this;}

    /**
     * <p>Information about the <a>RuleGroup</a> that you specified in the
     * <code>GetRuleGroup</code> request. </p>
     */
    inline GetRuleGroupResult& WithRuleGroup(RuleGroup&& value) { SetRuleGroup(std::move(value)); return *this;}

  private:

    RuleGroup m_ruleGroup;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
