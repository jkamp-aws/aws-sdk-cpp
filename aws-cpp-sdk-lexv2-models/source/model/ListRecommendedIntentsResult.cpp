﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ListRecommendedIntentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRecommendedIntentsResult::ListRecommendedIntentsResult()
{
}

ListRecommendedIntentsResult::ListRecommendedIntentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRecommendedIntentsResult& ListRecommendedIntentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");

  }

  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");

  }

  if(jsonValue.ValueExists("localeId"))
  {
    m_localeId = jsonValue.GetString("localeId");

  }

  if(jsonValue.ValueExists("botRecommendationId"))
  {
    m_botRecommendationId = jsonValue.GetString("botRecommendationId");

  }

  if(jsonValue.ValueExists("summaryList"))
  {
    Aws::Utils::Array<JsonView> summaryListJsonList = jsonValue.GetArray("summaryList");
    for(unsigned summaryListIndex = 0; summaryListIndex < summaryListJsonList.GetLength(); ++summaryListIndex)
    {
      m_summaryList.push_back(summaryListJsonList[summaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
