#include <stdio.h>
#include <time.h>

int timeout(int seconds)
{
    clock_t endwait;
    endwait = clock() + seconds * CLOCKS_PER_SEC;
    while (clock() < endwait)
    {
    }

    return 1;
}

int main()
{
    printf("\nTHANKS FOR PLAYING!");
    if (timeout(3) == 1) // 3 seconds of timeout
    {
        printf("This will be printed after the timeout!");
    }
    return 0;
}