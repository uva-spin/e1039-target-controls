# VIs for MKS 946: Vacuum System Controller

## Device Info

* Specifications:  https://www.mksinst.com/f/946-vacuum-system-controller
* Manual:  https://www.lesker.com/NewWeb/Process_Instruments/pdf/Manuals/KJLC-MKS_946_Controller-Manual.pdf

## Sensors

* Pressure Sensor: MKS 722B (722B13TCD2FK)
* Mass Flow Controller: MKS GM100A
* Other devices could be connected

Two of MKS 722B are planned to be connected, as of August 2021.

## Device Functions

### Already Implemented

| Command | VI File | Description |
| ------- | ------- | ----------- |
| PRn  | mks946_get_pressure.vi            | Get the pressure of channel `n` |
| RNGn | mks946_get_pressure_full_scale.vi | Get the pressure full scale of channel `n` |
| RNGn | mks946_set_pressure_full_scale.vi | Set the pressure full scale of channel `n` |
| CMTn | mks946_get_pressure_type.vi       | Get the pressure type (ABS or Diff) of channel `n` |
| CMTn | mks946_set_pressure_type.vi       | Set the pressure type of channel `n` |
| U    | mks946_get_pressure_unit.vi       | Get the pressure unit (Torr, etc.)   |
| BVRn | mks946_set_voltage_full_scale.vi  | Set the voltage full scale of channel `n` |
| BVRn | mks946_get_voltage_full_scale.vi  | Get the voltage full scale of channel `n` |
| FRn  | mks946_get_flow.vi                | Get the flow of channel `n` |
| VACn | mks946_zero_pressure_channel.vi   | Zero the pressure of channel `n` |

### Not Implemented

* Many functions for the system control.
* Function to get the pressure of all six channels at once (`PRZ`).
* Many functions for the mass flow controller.
* All functions for the pressure (valve) controller.

These are thought to be not important, because the system control can be made on the front panel when needed and the mass flow and pressure controllers won't be connected.

## Interface Functions

| Function | VI File | Tested? |
| -------- | ------- | ------- |
| Single command test        | Each VI           | No |
| Device configuration       | t.b.w.            | No |
| Single device readout      | mks946_get_all.vi | Yes |
| Continuous device readout  | mks946_acquire.vi | Yes w/o hardware |
| Continuous readout logging | t.b.w.            | No |

## Other Info

This folder was first created from the template, `flow_c.zip`, by Kenichi in June 2021.
