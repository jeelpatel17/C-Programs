// INCOMPLETE

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int flag;
    printf("Enter a word to check its palindromity: ");
    scanf("%s", str);
    int size = strlen(str);
    for (int i = 0; i < size; i++)
    {
        if (str[i] != str[size - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("Pal");
    }
    else
    {
        printf("Not pal");
    }

    return 0;
}