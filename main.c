#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>

int main()
{
    pid_t pid;

    pid = fork();

    if (pid == -1)
    {
        printf("Problem with fork()");
        return 1;
    }

    // if (pid == 0) {

    // }
}