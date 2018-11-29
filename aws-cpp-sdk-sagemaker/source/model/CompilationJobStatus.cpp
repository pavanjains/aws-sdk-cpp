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

#include <aws/sagemaker/model/CompilationJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace CompilationJobStatusMapper
      {

        static const int INPROGRESS_HASH = HashingUtils::HashString("INPROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        CompilationJobStatus GetCompilationJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INPROGRESS_HASH)
          {
            return CompilationJobStatus::INPROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return CompilationJobStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CompilationJobStatus::FAILED;
          }
          else if (hashCode == STARTING_HASH)
          {
            return CompilationJobStatus::STARTING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return CompilationJobStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return CompilationJobStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CompilationJobStatus>(hashCode);
          }

          return CompilationJobStatus::NOT_SET;
        }

        Aws::String GetNameForCompilationJobStatus(CompilationJobStatus enumValue)
        {
          switch(enumValue)
          {
          case CompilationJobStatus::INPROGRESS:
            return "INPROGRESS";
          case CompilationJobStatus::COMPLETED:
            return "COMPLETED";
          case CompilationJobStatus::FAILED:
            return "FAILED";
          case CompilationJobStatus::STARTING:
            return "STARTING";
          case CompilationJobStatus::STOPPING:
            return "STOPPING";
          case CompilationJobStatus::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace CompilationJobStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
