#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  // ANSI escape code to clear the screen
  printf("\x1b[2J\x1b[H");
  exit(0);
}
