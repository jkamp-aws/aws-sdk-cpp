﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/StartFileTransferResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartFileTransferResult::StartFileTransferResult()
{
}

StartFileTransferResult::StartFileTransferResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartFileTransferResult& StartFileTransferResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TransferId"))
  {
    m_transferId = jsonValue.GetString("TransferId");

  }



  return *this;
}
