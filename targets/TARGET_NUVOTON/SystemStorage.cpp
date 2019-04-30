/*
 * Copyright (c) 2019, Nuvoton Technology Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "BlockDevice.h"
#include "FileSystem.h"
#include "FATFileSystem.h"
#include "LittleFileSystem.h"

#if COMPONENT_NUSD
#include "NuSDBlockDevice.h"
#endif

using namespace mbed;

BlockDevice *BlockDevice::get_default_instance()
{
#if COMPONENT_NUSD

    static NuSDBlockDevice default_bd;

    return &default_bd;

#else

    return NULL;

#endif
}
