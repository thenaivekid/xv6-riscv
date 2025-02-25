# Our verion of xv6-riscv os

-   Ashok Prasad Neupane
-   Anil Shrestha
-   Jeevan Neupane

# TODO

-   [x] help
-   [x] shutdown
-   [x] name before $ sign
-   [x] change color of Ashok$ to green
-   [x] change color of user command to yellow
-   [x] clear
-   [x] Implement a simple text editor:
-   [x] show_cmd that shows all available cmds
-   [x] change readme to readme.md for prettier readme and update with our todo and informations

# Usage On Ubuntu 24 LTS

First, we made a fork from https://github.com/mit-pdos/xv6-riscv

```bash
git clone git@github.com:thenaivekid/xv6-riscv.git

sudo apt-get install git build-essential qemu-system-riscv64

sudo apt-get install gcc-riscv64-linux-gnu binutils-riscv64-linux-gnu

make clean && make && make qemu

```

To exit from xv6 os:

```bash
Ctrl + a
x
```

To use the editor

```bash
editor name.txt
Ashok says hi
Ctrl + d # to exit and save
```

To see all the commands available:

```bash
show_cmd
```

For a little surprise:

```bash
help
```
