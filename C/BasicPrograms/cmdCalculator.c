#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void zoop() // in order to flush the previous input (healthier alternative of fflush(stdin))
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("\nInvalid arguments %d!\nPlease enter arguments with \"[operation] [number 1] [number 2]\" syntax.", argc);
    }
    else
    {
        int a, b;
        if (strcmp(argv[1], "add") == 0)
        {
            printf("%d\n", (atoi(argv[2])) + (atoi(argv[3])));
        }
        else if (strcmp(argv[1], "sub") == 0)
        {
            printf("%d\n", (atoi(argv[2])) - (atoi(argv[3])));
        }
        else if (strcmp(argv[1], "mul") == 0)
        {
            printf("%d\n", (atoi(argv[2])) * (atoi(argv[3])));
        }
        else if (strcmp(argv[1], "div") == 0)
        {
            printf("%1.2f\n", ((float)(atoi(argv[2])) / (atoi(argv[3]))));
        }
        else
        {
            printf("\nInvalid arguments!\nPlease enter arguments with \"[operation] [number 1] [number 2]\" syntax.");
        }
    }
    return 0;
}