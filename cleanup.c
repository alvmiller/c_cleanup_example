#include <stdio.h>

void clean_up(int *fd)
{
    printf("clean_up Got *fd = %d\n", *fd);
}

int main()
{
    int fd __attribute__ ((__cleanup__(clean_up))) = -1;
    printf("main *fd = %d\n", fd);

    return 0;
}
