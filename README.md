# My OS Project

This project documents my journey of learning and creating my own operating system from scratch.

## Project Structure

- `boot.asm`: The bootloader written in assembly.
- `kernel.c`: The kernel written in C.
- `linker.ld`: The linker script to place the kernel at the correct address.
- `os-image.bin`: The bootable image combining the bootloader and kernel.

## Steps to Create the First Kernel

### 1. Setting Up the Development Environment

#### Tools Required
- GCC (GNU Compiler Collection)
- NASM (Netwide Assembler)
- QEMU (for emulating the OS)

#### Installing the Tools
- **Ubuntu/Debian**:
  ```bash
  sudo apt update
  sudo apt install build-essential nasm qemu
