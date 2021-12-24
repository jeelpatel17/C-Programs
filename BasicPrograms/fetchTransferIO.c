// Fetching data from one file and transferring to other

#include <stdio.h>

void main()
{
    FILE *ptr1, *ptr2;
    ptr1 = fopen("generated.txt", "r");
    ptr2 = fopen("new.txt", "w");

    char c = fgetc(ptr1);

    while (c != EOF)
    {
        fprintf(ptr2, "%c", c);
        fprintf(ptr2, "%c", c);
        c = fgetc(ptr1);
    }

    fclose(ptr1);
    fclose(ptr2);
}