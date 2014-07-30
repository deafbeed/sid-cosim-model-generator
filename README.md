Co-Simulation Model Generator
=========

Overview
---
Co-Simulation enables one to jointly simulate and verify their application programs along with the underlying hardware. This setup uses the [Redhat SID](https://sourceware.org/sid/) which provides various hardware and reference board models to run simulations. Verilog RTL can be translated into a SID model which can be plugged into a pre-configured SID board.

Tools Involved
---
The following tools are involved in this setup:
- [Redhat SID](https://sourceware.org/sid/): SID is a framework for building computer system simulations. The setup has currently been tested and supports
only the ARM7 PID Board.
- [Verilator](http://www.veripool.org/wiki/verilator): Converts Verilog hardware descriptions/RTL into C++/System C models.
- [eCos](http://ecos.sourceware.org/) eCos is a real-time operating system (RTOS) for embedded applications. The setup has been tested with eCos running on a SID simulated ARM7 PID Board.
- [eCos ARM EABI Toolchain](http://ecos.sourceware.org/tools/linux-arm-elf.html): Offers a GNU GCC toolchain based compiler and debugger that are compatible with eCos

License
---
MIT License

Setup
---
Coming Soon...

Installation
---
Coming Soon...

Usage
---
Coming Soon...


