# ESP32 based multichannel clamp energy meter

Device that allows installation of multiple clamp / split current transformer energy meters (one per circuit breaker in home distribution box, so effectively per-room monitoring) and readout transmission over home automation protocols over IP. 

Energy meter is PZEM ([https://innovatorsguru.com/pzem-004t-v3/](https://innovatorsguru.com/pzem-004t-v3/)) and transmission protocol is MQTT for Home Assistant.

***Work in progress!***

## This project is related to mains, which is DEADLY. Proceed at your own risk. No responsibility taken by authors.

<img src="./danger.jpg" height="512" />

## Software

Arduino sketch - [./software/esp32-multichannel-clamp-energy-meter/](./software/esp32-multichannel-clamp-energy-meter/)

### Libraries

- ESP32 v2.0.5
- PZEM004Tv30 v1.12

## Hardware

ESP32 board connected to array of PZEMs - [./hardware/HARDWARE.md](./hardware/HARDWARE.md)

## Usage

### Software

TBD

### Installation

To install the system, you’ll need to interfere with a distribution box in your home. In most of the world, this requires an electrician licence. And again **it involves mains, which is DEADLY**. Below steps are just overview and only for qualified personnel, even then, there is no responsibility taken by author.

1. Power off entire installation
1. Install split current transformers / split coils over every live wire from each circuit breaker and plug them to PZEMs according to label
1. Attach common bus of power for PZEMs (AFTER main breaker) and plug it to PZEMs according to label
1. Install 5V USB power supply using the same bus and provider power to ESP32
1. Restore power 
