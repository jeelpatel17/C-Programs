#include <stdio.h>

void main()
{
    FILE *ptr;
    ptr = fopen("new.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    ptr = fopen("new.txt", "w");
    fprintf(ptr, "%d", num * 2);

    fclose(ptr);
}