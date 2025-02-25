#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
    printf("\nAvailable commands:\n");
    printf("cat      - Display file contents\n");
    printf("clear    - Clear the screen\n");
    printf("echo     - Print text to console\n");
    printf("grep     - Search text patterns\n");
    printf("help     - Show system information\n");
    printf("kill     - Terminate a process\n");
    printf("ln       - Create file links\n");
    printf("ls       - List directory contents\n");
    printf("mkdir    - Create directory\n");
    printf("rm       - Remove files\n");
    printf("sh       - Shell\n");
    printf("show_cmd - Show available commands\n");
    printf("shutdown - Power off the system\n");
    printf("text     - Simple text editor\n");
    printf("touch    - Create empty file\n");
    printf("wc       - Count words/lines\n");
    printf("\nUsage examples:\n");
    printf("ls         - List current directory\n");
    printf("cat file   - Show contents of file\n");
    printf("mkdir d    - Create directory 'd'\n");
    printf("touch file - Create empty file\n");
    printf("text file  - Edit file contents\n");
    printf("\n");
    exit(0);
}
