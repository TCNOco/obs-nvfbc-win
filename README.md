# obs-nvfbc-win

This is a fork of a project for using nvfbc in OBS on Linux.
I took that, and threw together things very simply for Windows. I highly doubt this will work at all. Just wanted to see if I could build it to get anywhere.

Currently getting:
`22:03:48.990: Unable to find NvFBCCreateInstance symbol in NvFBC library`
`22:03:48.990: Failed to initialize module 'obs-nvfbc.dll'`

This is an error from the plugin itself, so we're somewhere I hope :)
This project likely already exists. This is the first I'm hearing of it.
Do let me know :)


## obs-nvfbc

OBS Studio source plugin using NVIDIA's FBC API for Linux.

Note that this basically copies GPU memory to system memory just to push it back up to the GPU. Unless there is a way to directly pass an OpenGL buffer from a source to OBS (is there?) this is less optimal as it could be.

## Requirements

**NVIDIA Linux drivers 410.66 or newer**

> **IMPORTANT:** This plugin will **_NOT_** work with your regular **NVIDIA GeForce** graphics cards! The following NVIDIA GPUs are supported. This won't change unless NVIDIA releases an updated driver which allows running on other GPUs as well (or so..).

| Quadro Desktop | Quadro Mobile | Tesla
|----------------|---------------|------
| Quadro GP100   | Quadro K2000M | Tesla K10
| Quadro GV100   | Quadro K2100M | Tesla K20X
| Quadro K2000   | Quadro K2200M | Tesla K40
| Quadro K2000D  | Quadro K3000M | Tesla K80
| Quadro K2200   | Quadro K3100M | Tesla M10
| Quadro K4000   | Quadro K4000M | Tesla M4
| Quadro K4200   | Quadro K4100M | Tesla M40
| Quadro K5000   | Quadro K5000M | Tesla M6
| Quadro K5200   | Quadro K5100M | Tesla M60
| Quadro K6000   |               | Tesla P100 PCIe
| Quadro M2000   |               | Tesla P100 SXM2
| Quadro M4000   |               | Tesla P4
| Quadro M5000   |               | Tesla P40
| Quadro M6000   |               | Tesla P6
| Quadro P2000   |               | Tesla V100 FHHL
| Quadro P4000   |               | Tesla V100 PCIe (16GB)
| Quadro P5000   |               | Tesla V100 PCIe (32GB)
| Quadro P6000   |               | Tesla V100 SXM2
