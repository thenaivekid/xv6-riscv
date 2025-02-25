#include "kernel/types.h"
#include "kernel/stat.h"
#include "kernel/fcntl.h"
#include "user/user.h"

#define BUF_SIZE 512

void editor(char *filename) {
  int fd;
  char buf[BUF_SIZE];
  int n;

  if ((fd = open(filename, O_RDWR | O_CREATE)) < 0) {
    printf("editor: cannot open %s\n", filename);
    exit(1);
  }

  while ((n = read(0, buf, sizeof(buf))) > 0) {
    if (write(fd, buf, n) != n) {
      printf("editor: write error\n");
      exit(1);
    }
  }

  if (n < 0) {
    printf("editor: read error\n");
    exit(1);
  }

  close(fd);
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Usage: editor <filename>\n");
    exit(1);
  }

  editor(argv[1]);
  exit(0);
}
