#include <stdio.h>

void printStars(int rows)
{
    for (int i = 0; i < rows; i++) // we need to run the loop to print x lines of stars(given by user), so we must run the loop until the number given by user is one less than the total star lines.
                                   // this will ensure that a \n is printed after every star line.
    {
        for (int j = 0; j <= i; j++) // this loop runs as many times as the i loop runs, so that every  time the i is incremented, this loop knows how many stars to print
        {
            printf("*");
        }
        printf("\n");
    }
}

void reversePrintStars(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= (rows - i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int num;
    printf("Enter the number of stars you want to print: ");
    scanf("%d", &num);
    reversePrintStars(num);
    return 0;
}