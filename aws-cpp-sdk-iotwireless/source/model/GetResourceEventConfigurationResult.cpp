﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetResourceEventConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetResourceEventConfigurationResult::GetResourceEventConfigurationResult()
{
}

GetResourceEventConfigurationResult::GetResourceEventConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetResourceEventConfigurationResult& GetResourceEventConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DeviceRegistrationState"))
  {
    m_deviceRegistrationState = jsonValue.GetObject("DeviceRegistrationState");

  }

  if(jsonValue.ValueExists("Proximity"))
  {
    m_proximity = jsonValue.GetObject("Proximity");

  }

  if(jsonValue.ValueExists("Join"))
  {
    m_join = jsonValue.GetObject("Join");

  }

  if(jsonValue.ValueExists("ConnectionStatus"))
  {
    m_connectionStatus = jsonValue.GetObject("ConnectionStatus");

  }

  if(jsonValue.ValueExists("MessageDeliveryStatus"))
  {
    m_messageDeliveryStatus = jsonValue.GetObject("MessageDeliveryStatus");

  }



  return *this;
}
