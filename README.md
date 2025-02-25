# Our verion of xv6-riscv os
- Ashok Prasad Neupane
- Anil Shrestha
- Jeevan Neupane
# TODO
- [x] help
- [x] shutdown
- [x] name before $ sign
- [x] change color of Ashok$ to green
- [x] change color of user command to yellow
- [x] clear
- [ ] Implement a simple text editor:
- [ ] show_cmd that shows all available cmds
- [x] change readme to readme.md for prettier readme and update with our todo and informations


# Usage On Ubuntu 24 LTS 

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
