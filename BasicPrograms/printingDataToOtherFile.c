#include <stdio.h>

void main()
{
    FILE *ptr;
    char name[5][20]; // 5 strings, 20 character limit
    int code[5];
    ptr = fopen("new.txt", "w");
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the employee name: \n");
        scanf("%s", &name[i]);
        printf("Enter the employee code: \n");
        scanf("%d", &code[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        fprintf(ptr, "%s, %d\n", name[i], code[i]);
    }

    fclose(ptr);
}