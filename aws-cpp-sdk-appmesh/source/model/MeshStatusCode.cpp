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

#include <aws/appmesh/model/MeshStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppMesh
  {
    namespace Model
    {
      namespace MeshStatusCodeMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        MeshStatusCode GetMeshStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return MeshStatusCode::ACTIVE;
          }
          else if (hashCode == DELETED_HASH)
          {
            return MeshStatusCode::DELETED;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return MeshStatusCode::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MeshStatusCode>(hashCode);
          }

          return MeshStatusCode::NOT_SET;
        }

        Aws::String GetNameForMeshStatusCode(MeshStatusCode enumValue)
        {
          switch(enumValue)
          {
          case MeshStatusCode::ACTIVE:
            return "ACTIVE";
          case MeshStatusCode::DELETED:
            return "DELETED";
          case MeshStatusCode::INACTIVE:
            return "INACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace MeshStatusCodeMapper
    } // namespace Model
  } // namespace AppMesh
} // namespace Aws
