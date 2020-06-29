/**
 * \file rn487x.h
 * \brief This file contains APIs to access features support by RN487X series devices.
 */
/*
    (c) 2019 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/
#ifndef RN487X_H
#define	RN487X_H
#include <stdbool.h>
#include <stdint.h>
#include "rn487x.h"   

/**
 * \ingroup RN487X
 * \brief This macro defines the time needed to place RN487X device in reset.
 */
#define RN487X_RESET_DELAY_TIME         (1)

/**
 * \ingroup RN487X
 * \brief This macro defines the RN487X boot time.
 */
#define RN487X_STARTUP_DELAY            (200)

//Convert nibble to ASCII
#define NIBBLE2ASCII(nibble) (((nibble < 0x0A) ? (nibble + '0') : (nibble + 0x57)))

 /**
  * \ingroup RN487X
  * \brief Initializes RN487X Device
  * 
  * This API initializes RN487X Device.
  * 
  * \return Initialization Status.
  * \retval true - Success
  * \retval false - Failure.
  */
bool RN487X_Init(void);

 /**
  * \ingroup RN487X
  * \brief Sends out command to RN487X.
  *
  * This API takes command and its length as input and sends that command 
  * to RN487X.
  * 
  * \param cmd RN487X command
  * \param cmdLen RN487X command length
  * \return Nothing
  */
void RN487X_SendCmd(const uint8_t *cmd, uint8_t cmdLen);

/**
 * \ingroup RN487X
 * \brief Gets config value from RN487X by sending get command
 * 
 * This API gets the config value from RN487X by sending get command.
 * For more details, refer section 2.5 GET COMMANDS in RN4870-71 user guide.
 * 
 * \param getCmd Get command to send
 * \param getCmdLen Get command length
 * \param getCmdResp Buffer to store get command response
 * 
 * \return Length of get command response.
 * \retval index - tracked command response length.
 */
uint8_t RN487X_GetCmd(const char *getCmd, uint8_t getCmdLen, char *getCmdResp);

 /**
  * \ingroup RN487X
  * \brief Reads default response from RN487X.
  * 
  * This API reads RN487X interface for default response which is AOK or ERR.
  * 
  * \return Response Status
  * \retval true - Default Response Received
  * \retval false - Otherwise
  */
bool RN487X_ReadDefaultResponse(void);

 /**
  * \ingroup RN487X
  * \brief Sets up the Buffer and Buffer Size for Aysnc Message Handler
  * 
  * This API sets up the Buffer and the Buffer size to be used by the Async
  * Message Handler.
  * \param pBuffer Passed buffer
  * \param len Size of passed buffer 
  * \return Set Status
  * \retval true - Success
  * \retval false - Failure
  */
bool RN487X_SetAsyncMessageHandler(char* pBuffer, uint8_t len);

 /**
  * \ingroup RN487X
  * \brief Checks to see if there is Data Ready using Async Message Handling
  * 
  * This API checks to see if there is Data ready on the line using Async Message Handling.
  * This API follows the standard UART form.
  * \return Data Ready Status
  * \retval true - Data is ready
  * \retval false - Data is not ready
  */
bool RN487X_DataReady(void);

 /**
  * \ingroup RN487X
  * \brief Read incoming Data using Async Message Handling
  * 
  * This API reads incoming data using Async Message Handling.
  * This API follows the standard UART form.
  * \return Data Read
  */
uint8_t RN487X_Read(void);

#endif	/* RN487X_H */