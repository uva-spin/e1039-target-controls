# Slow Controls in PDP

This document is to write down how the slow-control variables are handled in PDP.

## Mapping

Configuration file: `B28_Slow_Controls.txt`
- Read by `SCM Global.vi`.
- Line format: board channel range interval offset multiplier field name
- He4Press: board = 4, channel = 21

`SCM-Slow Controls Monitor/SCM.vi` --- Real-time(?) monitor
`SCM-Slow Controls Monitor/SCM Global.vi` --- Parameter manager

## Interface

`PDP-Polarization_Display_Panel/PDP.vi`

In "Handle Message"
- Case = "Event="
- Sequence: Frame = 10 for "He4Press" for example.

We can add a new frame to show a new variable on PDP.

## How to add an readout channel

1. Add a line to `B28_Slow_Controls.txt`, using an unused port, like 22.
2. Run `SCM.vi`, or click "Update Channels from File" if already running.
3. Confirm the new channel appear in SCM.vi.

## Updates

C:\PDP\devel\PDP was made from C:\Users\anchi\OneDrive\Documents\PDP



## Short notes

Event builder has to be running to update PDP.  Which VI file??
