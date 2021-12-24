#include <stdio.h>

void stringCopy(char *target, char *source)
{
    int i;
    for (i = 0; source[i] != '\0'; i++)
    {
        target[i] = source[i];
    }
    target[i] = '\0';
}

void main()
{
    char s1[] = "Ho Ho Ho!", s2[100];

    stringCopy(s2, s1);

    printf("S1: %s\nS2: %s", s1, s2);
}
