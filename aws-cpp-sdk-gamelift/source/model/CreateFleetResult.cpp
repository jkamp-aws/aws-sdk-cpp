﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/CreateFleetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateFleetResult::CreateFleetResult()
{
}

CreateFleetResult::CreateFleetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateFleetResult& CreateFleetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FleetAttributes"))
  {
    m_fleetAttributes = jsonValue.GetObject("FleetAttributes");

  }

  if(jsonValue.ValueExists("LocationStates"))
  {
    Aws::Utils::Array<JsonView> locationStatesJsonList = jsonValue.GetArray("LocationStates");
    for(unsigned locationStatesIndex = 0; locationStatesIndex < locationStatesJsonList.GetLength(); ++locationStatesIndex)
    {
      m_locationStates.push_back(locationStatesJsonList[locationStatesIndex].AsObject());
    }
  }



  return *this;
}
