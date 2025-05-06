/******************************************************************************
 *
 * Copyright (C) 2022-2023 Maxim Integrated Products, Inc. (now owned by 
 * Analog Devices, Inc.),
 * Copyright (C) 2023-2024 Analog Devices, Inc.
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
 *
 ******************************************************************************/

 /**
  * @file       mxc_device.h
  * 
  * @brief      Contain device and revision specific definitions
  * 
  * @note    Using for pratice. Copyright remain above.
  * 
  */

#ifndef LIBRARIES_PERIPHDRIVERS_INCLUDES_MAX32662_MXC_DEVICE_H_
#define LIBRARIES_PERIPHDRIVERS_INCLUDES_MAX32662_MXC_DEVICE_H_

/* Inlcudings */
#include "max32662.h"           /* Chip-specific definitions */
#include "mxc_errors.h"         /* Error code definitions */
#include "mxc_pins.h"           /* Pin definitions */
#include "project_defines.h"

/* Target Verification */
#ifndef TARGET
#error TARGET NOT DEFINED
#endif

/* String definition for TARGET */
#define STRING_ARG(arg)     #arg                    /* Using # operator to convert a macro parameter to a string */
#define STRING_NAME(name)   STRING_NAME(name)       /* Calls STRING_ARG with the parameter */
#define TARGET_NAME         STRING_NAME(TARGET)

/* Target Revision Check */
#ifndef TARGET_REV
#error TARGET_REV NOT DEFINED
#endif

/* Hardware Revision Configuration */
#if (TARGET_REV == 0x4131)              /* A1 = 0x41: 'A', 0x31: '1' */
#define MXC_PBM_REV     0
#define MXC_TMR_REV     0
#define MXC_UART_REV    1
#else
#error TARGET_REV NOT SUPPORTED
#endif

#endif // LIBRARIES_PERIPHDRIVERS_INCLUDES_MAX32662_MXC_DEVICE_H_