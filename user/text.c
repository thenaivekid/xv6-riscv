#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fcntl.h"

#define BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(2, "Usage: text filename\n");
        exit(1);
    }

    int fd = open(argv[1], O_CREATE | O_RDWR);
    if (fd < 0)
    {
        fprintf(2, "text: cannot create %s\n", argv[1]);
        exit(1);
    }

    char buffer[BUFFER_SIZE];
    printf("Enter text (press Ctrl+D on a new line to save and exit):\n");

    while (1)
    {
        int n = read(0, buffer, BUFFER_SIZE);
        if (n <= 0)
            break;
        write(fd, buffer, n);
    }

    close(fd);
    exit(0);
}
