#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(3 * (sizeof(int))); // sizeof is used here as we don't know the memory architecture that is going to be in different computers(in which the program is going to run!).
    return 0;
}