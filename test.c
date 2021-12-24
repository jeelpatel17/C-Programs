#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter int %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, 10 * sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        printf("Enter int %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }
}