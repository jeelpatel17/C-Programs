#include <stdio.h>

void quiz(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
}

int main()
{
    int a = 2, b = 4;
    quiz(&a, &b);
    printf("Sum of a and b: %d, Subtraction of a and b: %d", a, b);
    return 0;
}