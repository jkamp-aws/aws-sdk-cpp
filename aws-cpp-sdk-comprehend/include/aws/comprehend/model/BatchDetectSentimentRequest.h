﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/LanguageCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Comprehend
{
namespace Model
{

  /**
   */
  class BatchDetectSentimentRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API BatchDetectSentimentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDetectSentiment"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list containing the UTF-8 encoded text of the input documents. The list can
     * contain a maximum of 25 documents. The maximum size of each document is 5 KB.
     * </p>  <p>Amazon Comprehend performs real-time sentiment analysis on the
     * first 500 characters of the input text and ignores any additional text in the
     * input.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetTextList() const{ return m_textList; }

    /**
     * <p>A list containing the UTF-8 encoded text of the input documents. The list can
     * contain a maximum of 25 documents. The maximum size of each document is 5 KB.
     * </p>  <p>Amazon Comprehend performs real-time sentiment analysis on the
     * first 500 characters of the input text and ignores any additional text in the
     * input.</p> 
     */
    inline bool TextListHasBeenSet() const { return m_textListHasBeenSet; }

    /**
     * <p>A list containing the UTF-8 encoded text of the input documents. The list can
     * contain a maximum of 25 documents. The maximum size of each document is 5 KB.
     * </p>  <p>Amazon Comprehend performs real-time sentiment analysis on the
     * first 500 characters of the input text and ignores any additional text in the
     * input.</p> 
     */
    inline void SetTextList(const Aws::Vector<Aws::String>& value) { m_textListHasBeenSet = true; m_textList = value; }

    /**
     * <p>A list containing the UTF-8 encoded text of the input documents. The list can
     * contain a maximum of 25 documents. The maximum size of each document is 5 KB.
     * </p>  <p>Amazon Comprehend performs real-time sentiment analysis on the
     * first 500 characters of the input text and ignores any additional text in the
     * input.</p> 
     */
    inline void SetTextList(Aws::Vector<Aws::String>&& value) { m_textListHasBeenSet = true; m_textList = std::move(value); }

    /**
     * <p>A list containing the UTF-8 encoded text of the input documents. The list can
     * contain a maximum of 25 documents. The maximum size of each document is 5 KB.
     * </p>  <p>Amazon Comprehend performs real-time sentiment analysis on the
     * first 500 characters of the input text and ignores any additional text in the
     * input.</p> 
     */
    inline BatchDetectSentimentRequest& WithTextList(const Aws::Vector<Aws::String>& value) { SetTextList(value); return *this;}

    /**
     * <p>A list containing the UTF-8 encoded text of the input documents. The list can
     * contain a maximum of 25 documents. The maximum size of each document is 5 KB.
     * </p>  <p>Amazon Comprehend performs real-time sentiment analysis on the
     * first 500 characters of the input text and ignores any additional text in the
     * input.</p> 
     */
    inline BatchDetectSentimentRequest& WithTextList(Aws::Vector<Aws::String>&& value) { SetTextList(std::move(value)); return *this;}

    /**
     * <p>A list containing the UTF-8 encoded text of the input documents. The list can
     * contain a maximum of 25 documents. The maximum size of each document is 5 KB.
     * </p>  <p>Amazon Comprehend performs real-time sentiment analysis on the
     * first 500 characters of the input text and ignores any additional text in the
     * input.</p> 
     */
    inline BatchDetectSentimentRequest& AddTextList(const Aws::String& value) { m_textListHasBeenSet = true; m_textList.push_back(value); return *this; }

    /**
     * <p>A list containing the UTF-8 encoded text of the input documents. The list can
     * contain a maximum of 25 documents. The maximum size of each document is 5 KB.
     * </p>  <p>Amazon Comprehend performs real-time sentiment analysis on the
     * first 500 characters of the input text and ignores any additional text in the
     * input.</p> 
     */
    inline BatchDetectSentimentRequest& AddTextList(Aws::String&& value) { m_textListHasBeenSet = true; m_textList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list containing the UTF-8 encoded text of the input documents. The list can
     * contain a maximum of 25 documents. The maximum size of each document is 5 KB.
     * </p>  <p>Amazon Comprehend performs real-time sentiment analysis on the
     * first 500 characters of the input text and ignores any additional text in the
     * input.</p> 
     */
    inline BatchDetectSentimentRequest& AddTextList(const char* value) { m_textListHasBeenSet = true; m_textList.push_back(value); return *this; }


    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. All documents must be in the same
     * language.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. All documents must be in the same
     * language.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. All documents must be in the same
     * language.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. All documents must be in the same
     * language.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. All documents must be in the same
     * language.</p>
     */
    inline BatchDetectSentimentRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. All documents must be in the same
     * language.</p>
     */
    inline BatchDetectSentimentRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_textList;
    bool m_textListHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
