
#include <stdio.h>

int main()
{

    FILE *ptr = NULL;
    char string[50];
    ptr = fopen("text.txt", "r");
    fscanf(ptr, "%s", string);
    printf("%s", string);
    return 0;
}