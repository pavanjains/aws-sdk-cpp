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

#include <aws/sagemaker/model/ListLabelingJobsForWorkteamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListLabelingJobsForWorkteamRequest::ListLabelingJobsForWorkteamRequest() : 
    m_workteamArnHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_creationTimeAfterHasBeenSet(false),
    m_creationTimeBeforeHasBeenSet(false),
    m_jobReferenceCodeContainsHasBeenSet(false),
    m_sortBy(ListLabelingJobsForWorkteamSortByOptions::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

Aws::String ListLabelingJobsForWorkteamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workteamArnHasBeenSet)
  {
   payload.WithString("WorkteamArn", m_workteamArn);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_creationTimeAfterHasBeenSet)
  {
   payload.WithDouble("CreationTimeAfter", m_creationTimeAfter.SecondsWithMSPrecision());
  }

  if(m_creationTimeBeforeHasBeenSet)
  {
   payload.WithDouble("CreationTimeBefore", m_creationTimeBefore.SecondsWithMSPrecision());
  }

  if(m_jobReferenceCodeContainsHasBeenSet)
  {
   payload.WithString("JobReferenceCodeContains", m_jobReferenceCodeContains);

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", ListLabelingJobsForWorkteamSortByOptionsMapper::GetNameForListLabelingJobsForWorkteamSortByOptions(m_sortBy));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListLabelingJobsForWorkteamRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListLabelingJobsForWorkteam"));
  return headers;

}




