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

## Note on Shim Relay Control

The maker of the shim relay module provides a control program.
It can be used as follows:
1. Boot Windows
1. Connect the USB interface (via SX Virtual Link), with all other FTDI-chip interfaces disconnected.
1. Open `USB8RelayManagerv1.4.exe` and click `Open Relay Board`.
1. Close the manager
1. Open `e1039_Magnet_PS_Control.vi` and run it.

This procedure includes multiple steps, and thus is difficult to be automated:
* The manager communicates with the first-found FTDI-chip interface, no matter if it is the shim relay.  Thus all other FTDI-chip interfaces must be disconnected.
* The manager changes a communication mode.  Thus it must be opened once.

Therefore this program makes use of the FTDI D2XX function library.


## Contact

Kenichi Nakano
