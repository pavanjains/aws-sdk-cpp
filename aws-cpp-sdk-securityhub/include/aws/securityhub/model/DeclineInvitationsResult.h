﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/Result.h>
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
namespace SecurityHub
{
namespace Model
{
  class AWS_SECURITYHUB_API DeclineInvitationsResult
  {
  public:
    DeclineInvitationsResult();
    DeclineInvitationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeclineInvitationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of AWS accounts that were not processed. For each account, the list
     * includes the account ID and the email address.</p>
     */
    inline const Aws::Vector<Result>& GetUnprocessedAccounts() const{ return m_unprocessedAccounts; }

    /**
     * <p>The list of AWS accounts that were not processed. For each account, the list
     * includes the account ID and the email address.</p>
     */
    inline void SetUnprocessedAccounts(const Aws::Vector<Result>& value) { m_unprocessedAccounts = value; }

    /**
     * <p>The list of AWS accounts that were not processed. For each account, the list
     * includes the account ID and the email address.</p>
     */
    inline void SetUnprocessedAccounts(Aws::Vector<Result>&& value) { m_unprocessedAccounts = std::move(value); }

    /**
     * <p>The list of AWS accounts that were not processed. For each account, the list
     * includes the account ID and the email address.</p>
     */
    inline DeclineInvitationsResult& WithUnprocessedAccounts(const Aws::Vector<Result>& value) { SetUnprocessedAccounts(value); return *this;}

    /**
     * <p>The list of AWS accounts that were not processed. For each account, the list
     * includes the account ID and the email address.</p>
     */
    inline DeclineInvitationsResult& WithUnprocessedAccounts(Aws::Vector<Result>&& value) { SetUnprocessedAccounts(std::move(value)); return *this;}

    /**
     * <p>The list of AWS accounts that were not processed. For each account, the list
     * includes the account ID and the email address.</p>
     */
    inline DeclineInvitationsResult& AddUnprocessedAccounts(const Result& value) { m_unprocessedAccounts.push_back(value); return *this; }

    /**
     * <p>The list of AWS accounts that were not processed. For each account, the list
     * includes the account ID and the email address.</p>
     */
    inline DeclineInvitationsResult& AddUnprocessedAccounts(Result&& value) { m_unprocessedAccounts.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Result> m_unprocessedAccounts;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
