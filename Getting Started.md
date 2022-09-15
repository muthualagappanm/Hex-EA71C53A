# Getting Started with PIC32CX-BZ2/WBZ451

## Introduction

The PIC32CX-BZ2 family of devices have a High-Performance ARM® Cortex®-M4F core and an integrated 2.4 GHz Ultra-low Power RF Transceiver for Bluetooth and/or Zigbee based wireless applications.
WBZ45x are RF modules based of PIC32CX-BZ2 family of SoC devices.

## Evaluation and Development

WBZ451 Curiosity board is an easy to use development platform that allows users to evaluate the rich peripherals set (ARM® Cortex®-M4F core) and BLE + Zigbee (2.4 GHz Ultra-low Power RF Transceiver) wireless connectivity of the WBZ451 RF module. This section will list the Hardware, Software and documents available for users to quickly move from concept to design

WBZ451 Curiosity Board comes pre-programmed with a Concurrent Multiprotocol (BLE+Zigbee) Application. The Out of Box demo experience is documented [here](OOBE%20BLE%20Zigbee%20App.pdf) 

## Hardware

1. WBZ451 Curiosity Board
2. iOS or Android based Smartphone
3. Amazon Echo with Zigbee Support(Optional)

## Software

1. MPLABx IDE - Available in [IDE](https://www.microchip.com/en-us/tools-resources/develop/mplab-x-ide)
2. XC32 Compiler – Available in [Compiler](https://www.microchip.com/en-us/tools-resources/develop/mplab-xc-compilers)
3. MPLAB Code Configurator and Development Environment Setup for PIC32CX-BZ/WBZ45x – Instructions available in [PIC32CX-BZWBZ45x SDK Setup.pdf](Documentation/PIC32CX-BZWBZ45x%20SDK%20Setup.pdf)
4. **Caution** Check if Kit Update required - [Kit Update](Documentation/Updating%20WBZ451%20Curiosity%20board%20Kit%20Info%20to%20work%20with%20MPLAB%20x%20IDE.pdf)
5. Application Examples – Instructions to build and program an application example available in [PIC32CX-BZWBZ45x SDK Setup.pdf](Documentation/PIC32CX-BZWBZ45x%20SDK%20Setup.pdf)
	- **BLE**

		- [BLE Advanced Applications](H3/wireless_apps_pic32cxbz2_wbz45/apps/ble/advanced_applications/ble_uart_demo)
			- [BLE Sensor App](H3/wireless_apps_pic32cxbz2_wbz45/apps/ble/advanced_applications/ble_sensor_app)
			- [BLE Uart Demo](H3/wireless_apps_pic32cxbz2_wbz45/apps/ble/advanced_applications/ble_uart_demo)
		- [BLE Building Blocks](H3/wireless_apps_pic32cxbz2_wbz45/apps/ble/building_blocks)
			- [Getting Started](H3/wireless_apps_pic32cxbz2_wbz45/apps/ble/building_blocks/readme.md)

	- **Zigbee**
		- [Zigbee Coordinator/Zigbee Combined Interface](H3/wireless_apps_pic32cxbz2_wbz45/apps/zigbee/zigbee_combined_interface)
		- [Zigbee Router/Zigbee Lights](H3/wireless_apps_pic32cxbz2_wbz45/apps/zigbee/zigbee_lights)
		- [Zigbee End Device/Zigbee Multisensor](H3/wireless_apps_pic32cxbz2_wbz45/apps/zigbee/zigbee_multisensor)

	- **Multiprotocol (BLE + Zigbee)**
		- [BLE and Zigbee Basic App](H3/wireless_apps_pic32cxbz2_wbz45/apps/multiprotocol/ble_zigbee_basic)
		- [Zigbee Light Provisioning over BLE](H3/wireless_apps_pic32cxbz2_wbz45/apps/multiprotocol/ble_zigbee_light_prov)
		- [Zigbee Multisensor Provisioning over BLE](H3/wireless_apps_pic32cxbz2_wbz45/apps/multiprotocol/sensor_prov)

## Smartphone App - Microchip Bluetooth Data(MBD)

- iOS and Android users can search for “Microchip Bluetooth Data” or "MBD" App in App Store and Google Play Store respectively to install the App

## Documentation

### Hardware related documents

- Advanced Datasheet – Available [here](Documentation)
- WBZ451 Curiosity Board User Guide – Available [here](Documentation)
- Schematic – Available [here](Documentation/Schematics)
- Product Brief - Availlable [here](Documentation)

### Software Development related documents

- Building a New BLE Application from scratch – Available [here](H3/wireless_apps_pic32cxbz2_wbz45/apps/ble/building_blocks/readme.md)
- Building a New Zigbee Application from scratch – Available [here](H3/wireless_apps_pic32cxbz2_wbz45/apps/zigbee/zigbee_project_generation.md)
- Building a New Multiprotocol (BLE + Zigbee) Application from scratch – Available [here](H3/wireless_apps_pic32cxbz2_wbz45/apps/multiprotocol/ble_zigbee_basic/readme.md)
- Low Power Intro – Available [here](H3/wireless_apps_pic32cxbz2_wbz45/apps/docs/lowpower.md)
- Wireless (BLE/Zigbee) Driver Library Help – Available [here](H3/wireless/docs/index.html) <sup>html</sup>
- BLE Stack API Guide – Available [here](H3/wireless/driver/ble/docs/html/modules.html) <sup>html</sup>
- Zigbee Stack API Guide – Available [here](H3/wireless/driver/zigbee/docs/html/modules.html) <sup>html</sup>
- Application Examples Help Available – [here](H3/wireless_apps_pic32cxbz2_wbz45/docs/apps/readme.html) <sup>html</sup>
- Known Issues related to Package, SDK, Tools, feature implementations listed [here](Documentation/Known%20Issues.pdf)
- Harmony PIC32CX_BZ Peripheral Library Help [here](https://microchip-mplab-harmony.github.io/csp/05544.html)

**Note** links superscripted as "html" can only be viewed when the package is cloned locally

### Migrating from EA3.1.x to EA3.3 Package

- [Migration Guide](Documentation/Migration%20Guide_EA3_1_x%20package%20to%20EA3_3%20package.pdf)

Copyright © 2022 Microchip Technology.
