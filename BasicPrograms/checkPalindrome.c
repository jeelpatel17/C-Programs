#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[50];
    int again;
    printf("Enter a word to check its palindromity: ");
    scanf("%s", str);
    int size = strlen(str);

    for (int i = 0; i < size; i++) // running a for loop to compare every element of the string
    {
        if (str[i] != str[size - i - 1]) // the last argument means the element equally proportional to the str[i] element
        {
            printf("It's not a palindrome! :(");
            break;
        }
        else
        {
            printf("It's a palindrome!");
            break;
        }
    }

    printf("\nDo you wanna check again? (1/0) : "); // asking the user if they want to check a word's palindromity again!
    scanf("%d", &again);
    if (again == 1)
    {
        main(); // repeating the program again
    }
    else
    {
        exit(0); // exiting the program
    }

    return 0;
}