/**
 * \file rn487x_example.c
 * \brief This file contains the APIs required to communicate with the RN487X driver library to 
 *        create, and open a basic Transparent EUSART demonstration.
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

#include <stdbool.h>
#include <stdint.h>
#include "rn487x_example.h"
#include "../drivers/uart.h"
#include "../rn487x/rn487x_interface.h"
#include "../rn487x/rn487x.h"

/** MACRO used to configure the application used buffer sizes.
 *  This is used by the application for communication buffers.
 */
#define MAX_BUFFER_SIZE                 (80)

/**< Status Buffer instance passed to RN487X drive used for Asynchronous Message Handling (see *asyncBuffer in rn487x.c) */
static char statusBuffer[MAX_BUFFER_SIZE];    

/**
 * \def DEMO_PERIODIC_TRANSMIT_COUNT
 * This macro provide a definition for a periodic data transmission demostration
 */
#define DEMO_PERIODIC_TRANSMIT_COUNT           (10000)
/**
 * \def DEMO_PERIODIC_CHARACTER
 * This macro provide a character sent at a periodic rate for demostration
 */
#define DEMO_PERIODIC_CHARACTER                 ('.')
/**
 * \ingroup RN487X_Example
 * \brief Example Implmentation for simple Data Exchange Demostration
 *
 * This demostration uses the Lightblue BLE application developed by 'Punch Through' 
 * \return Connected Status
 * \retval true - Connected.
 * \retval false - Not Connected
 */  
static bool RN487X_Example_BasicDataExchange(void);
/**
 * \ingroup RN487X_Example_Run
 * \brief This 'Runs' the example applications While(1) loop
 *
 * For more details, refer Chapter 4.2 in RN487X user guide.
 * \param none
 * \return void
 */  
static void RN487X_Example_Run(void);

bool RN487X_Example_Initialized(void)
{
    bool exampleIsInitialized = false;
    
    exampleIsInitialized = RN487X_SetAsyncMessageHandler(statusBuffer, sizeof(statusBuffer));
    ENABLE_INTERRUPTS();
    
    if (exampleIsInitialized == true)
    {
        RN487X_Example_Run();
    }
    return (false);     // ^ Held if Successful; Return failure if reaching this.
}

static void RN487X_Example_Run(void)
{
    while(1)
    {
        if (true == RN487X_Example_BasicDataExchange())    
        {
            // Connected
        }
        else
        {
            // Not Connected
        }
    }
}

static bool RN487X_Example_BasicDataExchange(void)
{
   static uint16_t periodicCounter = 0;
   bool isConnected;
   volatile uint8_t readData;
   readData = 0;
   isConnected = RN487X_IsConnected();

   if (true == isConnected)
   {
       while (RN487X_DataReady())
       {
           readData = RN487X_Read();
           // Use the readData as desired
       }
       if (periodicCounter == DEMO_PERIODIC_TRANSMIT_COUNT)
       {
           RN487X.Write('.');
           periodicCounter = 0;
       }
       else
       {
           periodicCounter++;
       }
   }
   else
    {
        while(RN487X_DataReady())
        {
            // Clear data; Allow ASYNC processor decode
            readData = RN487X_Read();
        }
    }

    return isConnected;
}
