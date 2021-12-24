#include <stdio.h>

int calcLen(char *arr)
{
    char *ptr = arr;
    int len = 0;
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}

void main()
{
    char str[20];
    printf("Enter a string to know its length: ");
    scanf("%s", str);
    printf("%d", calcLen(str));
}