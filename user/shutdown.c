#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  printf("Shutting down...\n");
  shutdown();
  return 0;  // Will not reach here if shutdown succeeds
}
