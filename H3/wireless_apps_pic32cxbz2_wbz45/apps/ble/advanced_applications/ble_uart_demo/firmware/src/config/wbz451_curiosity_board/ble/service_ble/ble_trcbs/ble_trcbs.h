/*******************************************************************************
  BLE Transparent Credit Based Service Header File

  Company:
    Microchip Technology Inc.

  File Name:
    ble_trcbs.h

  Summary:
    This file contains the BLE Transparent Credit Based Service functions for application user.

  Description:
    This file contains the BLE Transparent Credit Based Service functions for application user.
 *******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
// DOM-IGNORE-END


/**
 * @addtogroup BLE_TRCBS BLE_TRCBS
 * @{
 * @brief Header file for the BLE Transparent Credit Based Service library.
 * @note Definitions and prototypes for the BLE Transparent Credit Based Service stack layer application programming interface.
 */
#ifndef BLE_TRCBS_H
#define BLE_TRCBS_H


// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************


// *****************************************************************************
// *****************************************************************************
// Section: Macros
// *****************************************************************************
// *****************************************************************************

/**@defgroup BLE_TRCB_ASSIGN_HANDLE BLE_TRCB_ASSIGN_HANDLE
 * @brief Assigned attribute handles of BLE Transparent Credit Based Service.
 * @{ */
#define BLE_TRCB_START_HDL                                        0x00C0                /**< The start attribute handle of BLE Transparent Credit Based service. */
/** @} */


/**@defgroup BLE_TRCB_PSM BLE_TRCB_PSM
 * @brief The definition of BLE Transparent Credit Based PSM.
 * @{ */
#define BLE_TRCB_DATA_PSM                                         0x0081                /**< PSM value of data channel. */
/** @} */


/**@brief Definition of BLE Transparent Credit Based Service attribute handle */
typedef enum BLE_TRCB_AttributeHandle_T
{
    BLE_TRCB_HDL_SRV = BLE_TRCB_START_HDL,                               /**< Handle of Primary Service of BLE Transparent Credit Based Service. */
    BLE_TRCB_HDL_CHAR_CTRL,                                              /**< Handle of Transparent Credit Based Control characteristic. */
    BLE_TRCB_HDL_CHARVAL_CTRL,                                           /**< Handle of Transparent Credit Based Control characteristic value. */
    BLE_TRCB_HDL_CCCD_CTRL,                                              /**< Handle of Transparent Credit Based Control characteristic CCCD. */
    BLE_TRCB_HDL_CHAR_L2CAP_PSM,                                         /**< Handle of Transparent Credit Based L2CAP PSM characteristic. */
    BLE_TRCB_HDL_CHARVAL_L2CAP_PSM                                       /**< Handle of Transparent Credit Based L2CAP PSM characteristic value. */
}BLE_TRCB_AttributeHandle_T;


/**@defgroup BLE_TRCB_ASSIGN_HANDLE BLE_TRCB_ASSIGN_HANDLE
 * @brief Assigned attribute handles of BLE Transparent Credit Based Service.
 * @{ */
#define BLE_TRCB_END_HDL                                         BLE_TRCB_HDL_CHARVAL_L2CAP_PSM         /**< The end attribute handle of BLE Transparent Credit Based Service. */
/** @} */

// *****************************************************************************
// *****************************************************************************
// Section: Function Prototypes
// *****************************************************************************
// *****************************************************************************

/**
 *@brief This API is used to register the BLE Transparent Credit Based Service to GATT server.
 *
 *@note  Note that the start handle of the registering service should be greater than @ref GATTS_APP_SVC_START_HDL.
 *
 *
 *@retval MBA_RES_SUCCESS       Successfully registering the service
 *@retval MBA_RES_FAIL          Fail to register the service. The assigned attribute handles in the service conflict or \n
 *                              the start handle of the service is smaller than @ref GATTS_APP_SVC_START_HDL.
 */
uint16_t BLE_TRCBS_Add(void);


#endif

/**
  @}
 */
