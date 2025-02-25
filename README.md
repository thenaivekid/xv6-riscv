# Our verion of xv6-riscv os
- Ashok Prasad Neupane
- Anil Shrestha
- Jeevan Neupane
# TODO
- [x] help
<!-- - [ ] shutdown chatgpt could not do it -->
- [x] name before $ sign
- [ ] add the current path before Ashok$
- [ ] reboot



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
