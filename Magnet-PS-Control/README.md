# Magnet-PS-Control

VIs to control the E1039 target magnet PS.

## Device Info

* Magnet Power Supply: Oxford Instruments: Mercury iPS
* Shim Relay: Sain Smart: USB Relay Module
  https://www.sainsmart.com/products/4-channel-5v-usb-relay-module


## Prerequisite

* Mercury iXX: VIs for Magnet PS
    - Included in this repository.  No record where it was obtained.
* FTDI D2XX and VCP drivers: DLL for shim relay
    - https://ftdichip.com/drivers/d2xx-drivers/
    - Installed in the OS system.  
* FTDI D2XX function library: VIs for shim relay
    - https://www.ftdichip.com/old2020/Support/SoftwareExamples/CodeExamples/LabVIEW.htm
    - The original library is for the 32-bit environment.
      For the 64-bit environment, the types of all VI variables and DLL function calls have to be converted.
      The modified library is included in this repository.


## VI Usage

Execute `e1039-Magnet-PS-Control-LV13/e1039_Magnet_PS_Control.vi`.


## Contact

Kenichi Nakano
