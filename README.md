# Enhanced xv6-riscv Operating System

A customized version of MIT's xv6-riscv operating system with additional features and improvements.

[View Demo](https://drive.google.com/file/d/1oyY42pzPlJZK5mvNvH8TPkmaEiAPlxR-/view?usp=sharing)

## Installation

### Prerequisites
- Ubuntu 24 LTS

### Setup Instructions

1. Clone the repository:
    ```bash
    git clone git@github.com:thenaivekid/xv6-riscv.git
    ```

2. Navigate to the repository:
    ```bash
    cd xv6-riscv
    ```


2. Install required packages:
    ```bash
    sudo apt-get install git build-essential qemu-system-riscv64
    sudo apt-get install gcc-riscv64-linux-gnu binutils-riscv64-linux-gnu
    ```

3. Build and run:
    ```bash
    make clean && make && make qemu
    ```

## Usage

### Basic Commands

- `cat` - Display file contents
- `echo` - Print text to console
- `grep` - Search for patterns in files
- `init` - Initialize user environment
- `kill` - Terminate processes
- `ln` - Create links between files
- `ls` - List directory contents
- `mkdir` - Create new directory
- `rm` - Remove files
- `sleep` - Pause execution
- `stressfs` - File system stress test
- `usertests` - Run system tests
- `wc` - Count words/lines in files
- `zombie` - Create zombie process test
- `show_cmd` - Display all available commands
- `help` - Show help information
- `clear` - Clear the screen
- `shutdown` - Safely shutdown the system

### Text Editor Usage
```bash
editor filename.txt
# Type your content
# Press Ctrl + D to save and exit
```

### Exiting xv6
Press `Ctrl + A` followed by `X`

## Project Status

### Completed Features
- [x] Colorful command prompt
- [x] Username display before prompt
- [x] Command help system
- [x] System shutdown command
- [x] Screen clearing
- [x] Create new file 
- [x] Text editor
- [x] Command listing utility

### Commands Added
- `clear` - Clear the screen
- `shutdown` - Safely shutdown the system
- `show_cmd` - Show all available commands
- `touch` - Create new file
- `editor` - Simple text editor
- `help` - Show help information

## Contributors

- Ashok Prasad Neupane
- Anil Shrestha
- Jeevan Neupane

## Acknowledgments

- Based on MIT's [xv6-riscv](https://github.com/mit-pdos/xv6-riscv)
- Original xv6 developed by MIT PDOS team