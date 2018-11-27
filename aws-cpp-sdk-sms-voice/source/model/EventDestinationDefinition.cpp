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

#include <aws/sms-voice/model/EventDestinationDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointSMSVoice
{
namespace Model
{

EventDestinationDefinition::EventDestinationDefinition() : 
    m_cloudWatchLogsDestinationHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_kinesisFirehoseDestinationHasBeenSet(false),
    m_matchingEventTypesHasBeenSet(false)
{
}

EventDestinationDefinition::EventDestinationDefinition(JsonView jsonValue) : 
    m_cloudWatchLogsDestinationHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_kinesisFirehoseDestinationHasBeenSet(false),
    m_matchingEventTypesHasBeenSet(false)
{
  *this = jsonValue;
}

EventDestinationDefinition& EventDestinationDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudWatchLogsDestination"))
  {
    m_cloudWatchLogsDestination = jsonValue.GetObject("CloudWatchLogsDestination");

    m_cloudWatchLogsDestinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisFirehoseDestination"))
  {
    m_kinesisFirehoseDestination = jsonValue.GetObject("KinesisFirehoseDestination");

    m_kinesisFirehoseDestinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MatchingEventTypes"))
  {
    Array<JsonView> matchingEventTypesJsonList = jsonValue.GetArray("MatchingEventTypes");
    for(unsigned matchingEventTypesIndex = 0; matchingEventTypesIndex < matchingEventTypesJsonList.GetLength(); ++matchingEventTypesIndex)
    {
      m_matchingEventTypes.push_back(EventTypeMapper::GetEventTypeForName(matchingEventTypesJsonList[matchingEventTypesIndex].AsString()));
    }
    m_matchingEventTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue EventDestinationDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLogsDestinationHasBeenSet)
  {
   payload.WithObject("CloudWatchLogsDestination", m_cloudWatchLogsDestination.Jsonize());

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_kinesisFirehoseDestinationHasBeenSet)
  {
   payload.WithObject("KinesisFirehoseDestination", m_kinesisFirehoseDestination.Jsonize());

  }

  if(m_matchingEventTypesHasBeenSet)
  {
   Array<JsonValue> matchingEventTypesJsonList(m_matchingEventTypes.size());
   for(unsigned matchingEventTypesIndex = 0; matchingEventTypesIndex < matchingEventTypesJsonList.GetLength(); ++matchingEventTypesIndex)
   {
     matchingEventTypesJsonList[matchingEventTypesIndex].AsString(EventTypeMapper::GetNameForEventType(m_matchingEventTypes[matchingEventTypesIndex]));
   }
   payload.WithArray("MatchingEventTypes", std::move(matchingEventTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws