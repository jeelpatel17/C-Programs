#include <stdio.h>

int main()
{
    int y = 7;
    void *ptr;
    ptr = &y;
    printf("%d", *((int *)ptr));
    return 0;
}