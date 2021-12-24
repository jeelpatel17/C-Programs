#include <stdio.h>

int occurence(char word[], char c)
{
    char *ptr = word;
    int present = 0;
    int occ = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            present = 1;
            occ++;
        }
        ptr++;
    }
    if (present == 1)
    {
        printf("The character is present\n");
    }
    else if (present == 0)
    {
        printf("The character is not present\n");
    }
    return occ;
}

void clearStream()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

void main()
{
    char word[50];
    char character;
    printf("Enter a word: ");
    scanf("%s", word);
    printf("Enter a character to find from the word: ");
    clearStream();
    scanf("%c", &character);
    printf("The character is present in the word %d times", occurence(word, character));
}