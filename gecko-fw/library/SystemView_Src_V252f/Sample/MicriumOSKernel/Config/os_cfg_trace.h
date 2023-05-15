/*
 * Colyright 2018-2022 Nokia
 *
 * All software in this repository are licensed under the [BSD 3 Cluse License (BSD-3-Clause)](LICENSES\BSD-3-Clause.txt).
 * Hardware design is licensed with the [Nokia HW License](LICENSES\nokia-hw-license.txt).
 */

/*
*********************************************************************************************************
*                                            EXAMPLE CODE
*********************************************************************************************************
* Licensing:
*   The licensor of this EXAMPLE CODE is Silicon Laboratories Inc.
*
*   Silicon Laboratories Inc. grants you a personal, worldwide, royalty-free, fully paid-up license to
*   use, copy, modify and distribute the EXAMPLE CODE software, or portions thereof, in any of your
*   products.
*
*   Your use of this EXAMPLE CODE is at your own risk. This EXAMPLE CODE does not come with any
*   warranties, and the licensor disclaims all implied warranties concerning performance, accuracy,
*   non-infringement, merchantability and fitness for your application.
*
*   The EXAMPLE CODE is provided "AS IS" and does not come with any support.
*
*   You can find user manuals, API references, release notes and more at: https://doc.micrium.com
*
*   You can contact us at: https://www.micrium.com
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                                  KERNEL TRACE RECORDER CONFIGURATION
*
*                                      CONFIGURATION TEMPLATE FILE
*
* File : os_cfg_trace.h
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*********************************************************************************************************
*                                               MODULE
*********************************************************************************************************
*********************************************************************************************************
*/

#ifndef  _OS_CFG_TRACE_H_
#define  _OS_CFG_TRACE_H_


/*
*********************************************************************************************************
*********************************************************************************************************
*                                             INCLUDE FILES
*********************************************************************************************************
*********************************************************************************************************
*/

#include  <rtos/common/include/lib_def.h>


/*
*********************************************************************************************************
*********************************************************************************************************
*                                       TRACE RECORDER RESOURCES
*********************************************************************************************************
*********************************************************************************************************
*/

#define  OS_CFG_TRACE_MAX_TASK                              32

#define  OS_CFG_TRACE_MAX_RESOURCES                         256

#define  OS_CFG_TRACE_API_ENTER_EN                          DEF_DISABLED

#define  OS_CFG_TRACE_API_EXIT_EN                           DEF_DISABLED


/*
*********************************************************************************************************
*********************************************************************************************************
*                                             MODULE END
*********************************************************************************************************
*********************************************************************************************************
*/

#endif                                                          /* End of os_cfg_trace.h module include.                */
