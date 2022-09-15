Early Adopter Package Release Notes
   
## EA3 Release Package(BLE + Zigbee Support):  

### current version 3.3 (05/21/2022)

Changes since last Early Adopter package releases

- v3.3 (05/21/2022)
  - [Compiler] Removed Compiler Folder, instructions for compiler added to SDK Setup document 
  - [IDE] Removed MPLAB X IDE.pdf document, MPLAB X IDE folder has the Device Part Pack 
  - [Documentation] Updated SDK setup documentation to use latest versions of IDE, Compiler, MPLAB Code Configurator and Harmony components. Added a new "Troubleshooting" section for common issues reported
  - [Documentation] known Issues document updated to remove MCC configuration related issues, MCC related issues are resolved by using new version of MCC plugin and new stack(H3/wireless) part of this package
  - [OOBE BLE Zigbee App.pdf] Updated demo instructions, added more information as needed
  - [Win Tools] Replaced the empty zip file with correct win tool 
  - [H3/wireless_apps_pic32cxbz2_wbz45] Updated all app examples using latest Harmony Components and tool chain
  - [Documentation] Added instructions for updating the configuration on WBZ451 Curiosity Board with correct device name and updated IDE support
  - [H3/wireless] Updated stack to resolve MPLAB Code Configurator(MCC) component drop issue associated with Zigbee and Multiprotocol Apps
  - [Documentation/known Issues.pdf] Leakage current observed on a small set of boards, due to incorrect BOM used
  - [Documentation/Schematic] Updated schematics of the board, fixes incorrect voltage regulator used for module supply and other minor issues  


- v3.2.3 (03/23/2022)
  - [Documentation] Updated SDK Setup Documentation with Exclude kit checks information and more information on MCC component versions
  - [Documentation] Updated Out of Box Demo App example with Microchip Bluetooth Data Smartphone App installation instructions
  - [Doucmentation] Updated Known Issues document with new reported MCC related issues
  - renamed "ble_zigbee_multiSensor_prov" folder in Multiprotocol Apps to "sensor_prov"

- v3.2.2 (02/25/2022)
  - [Documentation] Updated Datasheet with correct Max Tx Output Power  
  - [Documentation] Removed Harmony framework related known issue as it is no longer applicable, added new Standby Mode limitation
  - [Doucmentation] User guide updated with 3.0 V regulator related information
  - [Documentation] Errata - New Errata related GPIO state in Deep Sleep and Extreme Deep Sleep Added
  - [Documentation] Updated Product Brief with correct Max Tx Output Power
  - [H3/wireless_apps_pic32cxbz2_wbz45] Corrected link to point user to right locations

- v3.2.1 (02/05/2022)
  - [Documentation/PIC32CX-BZWBZ45x SDK Setup ] Updated SDK Setup to avoid Long File Path Issue 
  - [README.md] Notes updated and Added to avoid Long File Path Issue

- v3.2 (02/02/2022)
  - [H3/wireless_apps_pic32cxbz2_wbz45] Ported all Application examples to MPLAB Code Configurator (MCC) based projects 
  - [H3/wireless_apps_pic32cxbz2_wbz45 - Documentation] All Documentation related to Application Examples updated to reflect MPLAB Code Configurator usage
  - [Documentation/PIC32CX-BZWBZ45x SDK Setup.pdf] updated instructions to setup MPLAB Code Configurator based Development Environment
  - [Documentation/Building a new BLE Application.pdf] Replaced with BLE Bulding Block training material

- v3.1.3 (01/26/2022)
  - [Documentation] Updated Migration Guide and Known Issues document with current information 
  - [Documentation] Datasheet, Errata, Product Brief Updated, to reflect "preliminary" status of document
  - [Documentation] Datasheet, Errata, Product Brief Updated, to remove the SOC variant "PIC32CX1012BZ25032" references
  - [Documentation] README.md, Getting Started Updated, to remove the Kit information Update process as it is no longer applicable
  - [Documentation] Schematic, Updated version of schematics made available 
    - WBZ451 module and associated peripherals powered by separate 3.0V regulator.
    - MikroBus UART Rx, Tx signals connected by sharing with MikroBus SPI SCK and MOSI
  
- v3.1.2 (01/06/2022)
  - [Documentation] Updated instructions in SDK Setup Doc - Documentation/PIC32CX-BZWBZ45x SDK Setup.pdf

- v3.1.1 (12/15/2021)
  - BLE Custom Service Low Power App Example Added
  - Updated instructions for BLE TRP UART central and peripheral examples
  - Updated images of ble building blocks introduction pages

- v3.1 (11/12/2021)
  - BLE & Zigbee Stack Support System Sleep/Standby Mode
  - Sleep Mode examples (Legacy_Adv, Ext_Adv, BLE_Custom_Service, Zigbee Multisensor) added
  - new system services repo added which includes BLE Provisioner H3 System Service and Application Timer, users can use this component to provision any zigbee device type
  - Instructions added on Kit Information Update (mandatory step)
  - Device Name for all application examples changed to "WBZ451"
  - Product Brief - New document Added
  - known issues document updated with known limitations related to Sleep Mode implementation
  - Migration Guide updated to accomodate EA3.1 release
  - Datasheet updates (Updates made since v3.02 release) 
    - Edits made to electrical characteristics to better understand conditions of test and maintain consistency with other parts of DS
    - Removed secure element references
    - Added more info- system configuration section, info related to alternate cfg registers being prsent
    - Added profiles supported/planned to be supported
    - Added WBZ450 info in configuration summary
    - Added diff variants pin outs
    - Corrected pincounts for Module
    - Added clarification of what is 32A variant correspond to
    - Updates made based of A0 jira parser review
    - Minor edits
  - Errata updates (updates made since v3.02 release)
    - Added clarification to TCC WO Errata
    - TC WO errata workaround updated 
    - new errata TCC (ALOCK)

- v3.02 (08/11/2021)
  - Datasheet updates (Updates made since v3.01 release) 
    - Added Confidential Watermark to the Datasheet
    - Removed unspported feature - HCI interface via UART

- v3.01 (07/13/2021)
  - Added Migration Guide
  - Getting Started.html converted to a markdown format
  - Datasheet updates (Updates made since EA1)
    - Added WBZ451 Module Mechanical Drawing
    - Added Introduction section
    - Updated/Added Electrical Characteristics 85 and 125 C
    - Minor edits made based on feedback received since EA1

- v3.0 (07/05/2021)
First BLE + Zigbee (Multiprotocol) Support Package, Updated Errata, Updated Datasheet, added Support documentation to create BLE, Zigbee or Multiprotocol Application from scratch, updated H3 components, added mechanical drawings for WBZ451

## EA2 Release Package(Zigbee only Support): 

### current version 2.0 (03/19/2021)
Changes since last Early Adopter package releases

- v2.0 (03/19/2021) First Package with Zigbee Support, Support documentation like Datasheet and Errata inherited from earlier version of EA1 packages

## EA1 Release Package(BLE only Support):  

### current version 1.2 (03/11/2021)

Changes since last Early Adopter package releases

- v1.2 (3/11/2021)
Updated images and text in SDK and Firmware Examples/Building a new BLE Application.pdf 
Datasheet has new chapters WDK, AES, ICM and minor edits
- v1.11 (2/11/2021)
Updated images in SDK and Firmware Examples/Building a new BLE Application.pdf
- v1.1 (2/3/2021)
Changes since last release
Datasheet includes new chapters CCL, Electrical Specs 85 C and 125 C
- v1.0 (01/25/2021) Initial Release - First Package with BLE Support
Changes since last release



