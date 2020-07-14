<!-- Please do not change this html logo with link -->
<a href="https://www.microchip.com" rel="nofollow"><img src="images/microchip.png" alt="MCHP" width="300"/></a>

# RN4870 | RN4871 BLE Module v1.0.0 Library

## Getting Started Guide

### What is the RN4870 | RN4871 BLE Module Library?

The MPLAB® Code Configurator [RN4870](https://www.microchip.com/wwwproducts/en/RN4870) | [RN4871](https://www.microchip.com/wwwproducts/en/RN4871) BLE Modules Library allows quick and easy configuration of the C code generated software driver based upont the user’s selected API features available from the MCC Library.
Generated Driver code supports use of either BLE Module with use of a PIC or AVR device. The library module uses a Graphic User Interface (GUI) presented by MCC within MPLABX which allows for selection of desired configuration, and custom configurations of the protocol. Customized C code is generated within the MPLABX project, in a foldernamed "MCC Generated Files". This Library uses (1) UART, (1) GPIO, and DELAY support at minimal.

Refer to the **/images** folder for source files & max resolution. 

---

### Driver Information

<br><img src="images/EcoSystem.png" alt="EcoSystem" width="500"/>

<br><img src="images/HostMCU.png" alt="HostMCU" width="250"/>

<br><img src="images/ExampleHookUp.png" alt="ExampleHookUp" width="1000"/>

<br><img src="images/RN487X_MCC.png" alt="RN487X_MCC" width="1000"/>

---

## Related Documentation

- [Microchip Bluetooth](https://www.microchip.com/design-centers/wireless-connectivity/bluetooth)
- [RN Data Sheet](http://ww1.microchip.com/downloads/en/DeviceDoc/RN4870-71-Bluetooth-Low-Energy-Module-Data-Sheet-DS50002489D.pdf)
- [RN User Guide](http://ww1.microchip.com/downloads/en/DeviceDoc/RN4870-71-Bluetooth-Low-Energy-Module-User-Guide-DS50002466C.pdf)
- [ATmega3208 Product Page](https://www.microchip.com/wwwproducts/en/ATmega3208)
- [PIC16LF18456 Product Page](https://www.microchip.com/wwwproducts/en/PIC16F18456)

## Software Used

- MPLAB® X IDE 5.40 or newer [(microchip.com/mplab/mplab-x-ide)](http://www.microchip.com/mplab/mplab-x-ide)
- MPLAB® XC8 2.20 or a newer compiler [(microchip.com/mplab/compilers)](http://www.microchip.com/mplab/compilers)
- MPLAB® Code Configurator (MCC) 3.95.0 or newer [(microchip.com/mplab/mplab-code-configurator)](https://www.microchip.com/mplab/mplab-code-configurator)
- MPLAB® Code Configurator (MCC) Device Libraries PIC10 / PIC12 / PIC16 / PIC18 MCUs [(microchip.com/mplab/mplab-code-configurator)](https://www.microchip.com/mplab/mplab-code-configurator)
- MPLAB® Code Configurator (MCC) Device Libraries AVR® MCUs [(microchip.com/mplab/mplab-code-configurator)](https://www.microchip.com/mplab/mplab-code-configurator)
- Microchip ATmega_DFP Series Device Support (2.2.108) or newer [(packs.download.microchip.com/)](https://packs.download.microchip.com/)
- Microchip PIC16F1xxxx_DFP Series Device Support (1.4.119) or newer [(packs.download.microchip.com/)](https://packs.download.microchip.com/)

## Hardware Used

- AVR-BLE Development Board [(DT100111)](https://www.microchip.com/design-centers/internet-of-things/iot-dev-kits/avr-ble-and-pic-ble-development-boards)
- PIC-BLE Development Board [(DT100112)](https://www.microchip.com/design-centers/internet-of-things/iot-dev-kits/avr-ble-and-pic-ble-development-boards)

## Setup

To install the MPLAB® Code Configurator Plugin:
1. In MPLAB X IDE, select Plugins from the Tools menu.
2. Select the Available Plugins tab.
3. Check the box for the MPLAB® Code Configurator v3, and click on Install.

---

To install the RN4870 | RN4871 BLE Module Library:
1. Open the MPLAB Code Configurator page: [https://www.microchip.com/mcc](https://www.microchip.com/mplab/mplab-code-configurator)
2. Scroll to the bottom of the page and select the Current Downloads tabs.
3. Download the RN4870 | RN4871 BLE Module Library (rn487x_ble_module-1.0.0.mc3lib).
4. In the MPLAB® X IDE click on Tools → Options.
     - This may also be found unnder: In the MPLAB® X IDE click on MPLAB® X IDE → Preferences.
5. Click on Plugins tab.
6. Click on Install Library.
7. Browse to the location where you saved rn487x_ble_module-1.0.0.mc3lib, select and click Open.

---

## Operation

### Part 1: Setup and Generation

1. [Create a New Project](https://www.youtube.com/watch?v=iZuucxaAVLg) in [MPLAB® X IDE](https://www.microchip.com/mplab/mplab-x-ide).
<br><img src="images/mplabIcon.png" alt="mplabIcon" width="75"/>

2. The Process described below is reflective of the Validation Hardware used: LightBlue. Microcontrollers used for reference are the PIC16LF18456 and ATmega3208 8-bit devices.
<br><img src="images/selectMCC.png" alt="selectMCC" width="350"/>

3. Open MCC by clicking **Tools** → **Embedded** → **MPLAB® Code Configurator** *_OR_* click on the MCC icon. 
<br><img src="images/mccIcon.png" alt="mccIcon" width="90"/>

4. If MCC is not available; it is required to be installed. Navigate to Tools→ Plugins. Under Available Plugins select MPLAB® Code Configurator, ensure the checkbox is selected and press Install. Once this installation is completed, MCC will be available.
<br><img src="images/installPlugin.png" alt="installPlugin" width="500"/>

5. On launching MCC; it will request saving MyConfig.mc3. This file may be renamed if desired; and contains the MCC Configuration information related to the project.
<br><img src="images/configurationMccSetup.png" alt="configurationMccSetup" width="300"/>

6. From the In the Device Resources panel under Libraries dropdown select: **RN4870 | RN4871 BLE Module**.
<br><img src="images/selectRnLibrary.png" alt="selectRnLibrary" width="300"/>

7. The Notifications [MCC] tab will appear after library addition to describe required actions. These reflect the need for Reset Pin connected to the Module to be assigned to a pin; this is required by the library. ‘Read Message’ API is required to be generated if specific driver supporting features are selected; by default, all driver API(s) are selected for generation.
<br><img src="images/alertMessages.png" alt="alertMessages" width="600"/>

8. If an example is selected for generation; only the required supporting API(s) will be selected for generation. Both the Transparent, and Basic Data examples require the same API(s). These minimal required supporting API(s) are shown below.
<br><img src="images/guiViewUsingExampleMarked.png" alt="guiViewUsingExampleMarked" width="500"/>

<br><img src="images/selectExample.png" alt="selectExample" width="500"/>

9. Enable the desired APIs. Basic description of API(s) can be found by hovering mouse over the ToolTip icon. 

**Note:** For both example use cases, Mode Control and Read Message support are required and cannot be deselected.

10. Through Foundation Services, select the UART(s) instances used for communication with the Module; or for supporting the generated example.
* Set the Baud rate for the module.
    * The default baud for the RN4870 and RN4871 modules is 115200.
    * **Hint:** The pre-programed baud rate for the AVR-BLE & PIC-BLE development boards is 9600.

<br><img src="images/9600_screenshot.png" alt="9600_screenshot" width="500"/>

<br><img src="images/115200_screenshot.png" alt="115200_screenshot" width="500"/>

---

**BASIC DATA EXCHANGE (1) UART & (1) GPIO**

---

### PIC16LF18456 MCC Configuration - Basic Data Exchange Example
<br><img src="images/libUart.png" alt="libUartBasicPIC" width="200"/>
<br><img src="images/setupUartBasicPIC.png" alt="setupUartBasicPIC" width="450"/>
<br><img src="images/setupPinModuleBasicPIC.png" alt="setupPinModuleBasicPIC" width="550"/>
<br><img src="images/setupDefaultBasicPIC.png" alt="setupDefaultBasicPIC" width="550"/>

---

### ATMega3208 MCC Configuration - Basic Data Exchange Example
<br><img src="images/libUart.png" alt="libUartBasicAVR" width="200"/>
<br><img src="images/setupUartAVR_Basic.png" alt="setupUartAVR_Basic" width="450"/>
<br><img src="images/setupPinModuleBasicAVR.png" alt="setupPinModuleBasicAVR" width="550"/>
<br><img src="images/setupDefaultBasicAVR.png" alt="setupUartAVR_Basic" width="550"/>

---

**TRANSPARENT SERIAL (2) UART & (1) GPIO**

---

### PIC16LF18456 MCC Configuration - Transparent Serial Example
<br><img src="images/libUart.png" alt="libUartSerialPIC" width="200"/>
<br><img src="images/setupUartTransparentPIC.png" alt="setupUartBasicPIC" width="450"/>
<br><img src="images/setupPinModuleTransparentPIC.png" alt="setupPinModuleTransparentPIC" width="550"/>
<br><img src="images/setupDefaultTransparentPIC.png" alt="setupDefaultTransparentPIC" width="550"/>

---

### ATMega3208 MCC Configuration - Transparent Serial Example
<br><img src="images/libUart.png" alt="libUartSerialAVR" width="200"/>
<br><img src="images/setupUartAVR.png" alt="setupUartAVR" width="450"/>
<br><img src="images/setupPinModuleTransparentAVR.png" alt="setupPinModuleTransparentAVR" width="550"/>
<br><img src="images/setupDefaultTransparentAVR.png" alt="setupDefaultTransparentAVR" width="550"/>

---

11. The notification related to **BT_RST** should be resolved by claiming the desired pin. Make sure this pin is configured as an output, and is in the **HIGH** state by default.

12. Click the **Generate** button.
<br><img src="images/generateCode.png" alt="generateCode" width="400"/>

13. Connect the development board your choice.

14. Include the header *mcc_generated_files/examples/rn487x_example.h* in **main.c**

15. Call the function *RN487X_Example_Initialized()* in **main()**, after **SYSTEM_Initialize()**.

16. Build and program the board.
---

_PIC Implementation:_
<br><img src="images/implementExamplePIC.png" alt="implementExamplePIC" width="500"/>

---

_AVR Implementation:_
<br><img src="images/implementExampleAVR.png" alt="implementExampleAVR" width="500"/>

---

## Running the Example

---

### Part 2: How to use the Generated Example(s)

1. Download a Phone Application for demostration: (either)
    * **Bluetooth Smart Discover** by **Microchip** from the [App Store](https://apps.apple.com/us/app/bluetooth-smart-discover/id1004015467) or from [Google Play](https://play.google.com/store/apps/details?id=com.microchip.bluetoothsmartdiscover&hl=en_US).
    * LightBlue by PunchThrough from the [App Store](https://apps.apple.com/us/app/lightblue/id557428110) or from [Google Play](https://play.google.com/store/apps/details?id=com.punchthrough.lightblueexplorer&hl=en_US).

2. Launch the Phone Application
<br><img src="images/SmartDiscover.png" alt="SmartDiscover" width="100"/><img src="images/lightBlue.png" alt="lightBlue" width="100"/>

<br><img src="images/OpenScreen.png" alt="OpenScreen" width="300"/>
<img src="images/lightBlueSplash.png" alt="lightBlueSplash" width="300"/>

3. The Application will automatically scan the area for Bluetooth devices within a range.
    * Use of the Filter (LightBlue only) will limit the Signal strength of devices populating the "Peripherals Nearby".
<br><img src="images/filter.png" alt="filter" width="300"/>

4. By default, the device should appear as "PIC-BLE", "AVR-BLE", "RN487X".
<br><img src="images/FoundDevice.png" alt="FoundDevice" width="300"/><img src="images/FoundDeviceLB.png" alt="FoundDeviceLB" width="300"/>

5. On selecting the "PIC-BLE", "AVR-BLE", "RN487X" device from the list; the application will interrogate the RN Module.
<br><img src="images/InterrogateLB.png" alt="InterrogateLB" width="300"/><img src="images/ViewLB.png" alt="ViewLB" width="300"/>

6. Once connected; the device information is shown on the view.<br>
**Note:** The custom LightBlue configuration screen will be grayed out unless using the LightBlue example project. 
* To enable the functionality again, program your board with the latest source code available:
    * [AVR-BLE LightBlue Demo](https://github.com/microchip-pic-avr-solutions/avr-lightblue-explorer-demo)
    * [PIC-BLE LightBlue Demo](https://github.com/microchip-pic-avr-solutions/pic-lightblue-explorer-demo)
<br><img src="images/ConnectedFull.png" alt="ConnectedFull" width="300"/><img src="images/smartConnectView.png" alt="smartConnectView" width="300"/>

7. Select the Properties Option: Write Notify Indicate Running the Example.
<br><img src="images/Connected2.png" alt="Connected2" width="300"/><img src="images/selectNotify.png" alt="selectNotify" width="300"/>

8. Select "Listen for notifications" on the application.
    * It may be required to "enable notification" access to the app on the phone.
    * Data will begin to Send at a Periodic Rate to the device.
    * Data will become visible beneath the Notify/Listen Toggle Option.
<br><img src="images/NotifyData.png" alt="NotifyData" width="300"/><img src="images/Data.png" alt="Data" width="300"/>

**_This is the END of the Basic Data Exchange Example_**

---
#### *_ONLY Transparent Serial steps remain below:_*

9. **For Transparent Serial only:**
Open a "Serial Terminal" Program such as Tera Term, Realterm, PuTTY, Serial; or similar.
Baud Rate will be configured as: 9600
<br><img src="images/terminalOpen.png" alt="terminalOpen" width="400"/><img src="images/terminalSettings.png" alt="terminalSettings" width="300"/>

10. Connection information is shown on the Terminal if there is one connected.
<br><img src="images/terminalStreamOpen.png" alt="terminalStreamOpen" width="400"/>

11. Captures Characters will be shown on the application in Hex formate.
<br><img src="images/terminalCharacter.png" alt="terminalCharacter" width="400"/>

12. Data will appear beneath the Notify/Listen Toggle Option area.
<br><img src="images/NotifyData.png" alt="NotifyData" width="300"/><img src="images/Log.png" alt="Log" width="300"/>
<br><img src="images/showDataLightBlue.png" alt="showDataLightBlue" width="300"/>

13. To issue data from the Phone Application to the RN Module. Select "Write new value".
    * Captures Characters will be shown on the application in Hex formate.
    * Enter a hex value; and press the "Write" or "Done" to issue data exchange.
    * The character sent will be shown on the terminal screen. 
    * Depending upon Terminal settings; it may be displayed in ACII format.
<br><img src="images/Write.png" alt="Write" width="300"/>
<br><img src="images/terminalHello.png" alt="terminalHello" width="400"/>
<br><img src="images/WriteLB.png" alt="WriteLB" width="300"/><img src="images/writeHexLight.png" alt="writeHexLight" width="300"/>
<br><img src="images/terminalCharacter.png" alt="terminalCharacter" width="400"/>
<br><img src="images/Select.png" alt="Select" width="300"/><img src="images/Hex.png" alt="Hex" width="300"/>

---

## Summary

### Command, Data Communication with Asynchronized Message Processing:
This driver contains, at its' core, the inherent code capability of distinguishing between **Message** exchange and **Data** exchange between the connected MCU and Module devices.
The library supplies all required Application Programming Interfaces (APIs) required to create functional
implementation of operation a BLE connected end-device.

Through the MCC configuration the physical connection of the (3) required pins can be selected through the GUI.
These are the (2) UART pins used for communication, and control of the **RST_N** connected to the RN487X Module.

Additionally; this Library allows for extension of Module pin behaviors through the simple RN487X Module object
interface; where any device/project specific instantiations exist. **rn487x_interface.c/h**

A brief description of the Interface, and object extension is described below:

iRN487X_FunctionPtrs_t is a typedef struct which can be found in **rn487x_interface.h** and consist of (9) function pointers. In the **rn487x_interface.c**, the concrete creation of RN487X as an object is instantiated. Within **rn487x_interface.c** are the **private static** implementations of desired behavior. In some cases, such as DELAY or UART, the supporting behavior is supplied through another supporting library module. When applicable ‘inline’ has been used to reduce stack depth overhead.

<br><img src="images/Interface.png" alt="Interface" width="400"/>

The driver library itself should not require any modifications or injections by the user; unless to expand upon the supported command implementations. **rn487x_driver.c/h**

### Configurable Module Hardware Requirement(s):
A single UART instance used for communication between MCU and Module:

<br><img src="images/uartInstance.png" alt="uartInstance" width="400"/>

The Library allows for configuration of (3) Pins associated with support features extended through the Driver
Interface. Only (1) Pin is required by the RN487X Modules for operation; this is the modules **RESET** pin.

<br><img src="images/rnPinSetup.png" alt="rnPinSetup" width="400"/>

| Library Name: Output(s) | Module: Input(s) | Description | Module Physical Defaults | 
| :------------- |:-------------:| :------------- | :------------- |
| BT_MODE | P2_0 | **_1_** : Application Mode <br> **_0_** : Test Mode/Flash Update/EEPROM Cofiguration | Active-Low, Internal Pull-High |
| BT_RST | RST_N | **Module Reset**  | Active-Low, Internal Pull-High |
| BT_RX_IND | P3_3 | Configured as UART RX Indication pin | Active-Low |

---

### Basic Application Ready API(s):
This Driver Library also include select command implementations for advanced command usage in association with
the BLE Module. These are described within the RN4870/71® Bluetooth Low Energy Module User’s Guide.
The Driver Library does NOT support all commands described within the User’s Guide.
API(s) will be generated to supported behaviors described below:

<br><img src="images/mccCommands.png" alt="mccCommands" width="200"/>

| Allowed Behavior from Library | [Refer to User Guide](http://ww1.microchip.com/downloads/en/DeviceDoc/50002466B.pdf) |
| :------------- |:-------------:|
| Disconnect from Module      | 2.6.25 |
| Reboot Module     | 2.6.28 |
| Restore Factory Reset Default Settings | 2.4.14 - 2.4.15|

<br><img src="images/mccData.png" alt="mccData" width="200"/>

| Allowed Behavior from Library | Processing Action |
| :------------- |:-------------:|
| Read Message | API used to Parse a Response Message |
| Wait For Message | Response Effectively a BLOCKING method which will read continuously from the RN487X Module until a specific expected Message is received. |
| Support 'Mode' Control | Supporting API(s) required for advanced usage of Modules capabilities.|

<br><img src="images/mccSet.png" alt="mccSet" width="200"/>

| Allowed Behavior from Library | [Refer to User Guide](http://ww1.microchip.com/downloads/en/DeviceDoc/50002466B.pdf) |
| :------------- |:-------------:|
| Device Name | 2.4.18 |
| Baud Rate | 2.4.5 |
| Service Bit Map | 2.4.22 |
| Features Bit Map | 2.4.21 |
| Set I/O Capability | 2.4.4 |
| PIN Code| 2.4.20|
| Status Message Delimiter | 2.4.3 |
| Output | 2.6.7 |

<br><img src="images/mccGet.png" alt="mccGet" width="200"/>

| Allowed Behavior from Library | [Refer to User Guide](http://ww1.microchip.com/downloads/en/DeviceDoc/50002466B.pdf) |
| :------------- |:-------------:|
| Input Values | 2.6.6 |
| Receive Signal Strength Indicator (RSSI) Value | 2.6.26 |

---

### Simple Example(s):
The Driver Library include (2) example implementations for demonstration of use of the generated code. 

Upon selecting an example, only the required API(s) will be selected by default. Minimal implementation of the capabilities of the driver library are used to allow for minimal baseline of size requirements.

**Note*:**
<br> 
**CONNECTION** indicator driven by the RN487X Module (typically connected to an LED) relates only to if a device is **CONNECTED** but may not be yet exchanging **Data**.

**_The generated examples are:_**

### Basic Data Exchange:
This example shows how an MCU can be programmed to transmit data to a smart phone over BLE. Here the MCU device will send Periodic Transmission of a single character when **STREAM_OPEN** is processed through the Message Handler. This indicates to the MCU & RN487X Module that the application is in a DATA STREAMING mode of operation; and can expect to hear data over the BLE connection.

**#define DEMO_PERIODIC_TRANSMIT_COUNT**           (10000)
<br>
**#define DEMO_PERIODIC_CHARACTER**                 (‘.’) 

Are used in the example can be found #defined at the top of **rn487x_example.c**.

### Transparent Serial:
This example will demostrat data transmitted from a PC serial terminal is written to a smart phone app and vice versa. The MCU device will act as a bridge, and pass data between RN487X Module ← MCU → Serial Terminal. This action will occur when **STREAM_OPEN** is processed through the Message Handler. For this example, data typed into the Serial Terminal will appear on the BLE Phone Application, and Data sent from the Application will appear on the Serial Terminal.
