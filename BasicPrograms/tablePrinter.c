#include <stdio.h>

void main()
{
    int inp;
    printf("Enter the number whose table you want: ");
    scanf("%d", &inp);
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", inp, i + 1, (i + 1) * inp);
    }
}

//================== W I T H  A R R A Y ======================

// void printTable(int *mulTable, int num, int n);

// void main()
// {
//     int mulTable[3][10], num, level;
//     printf("Enter the number of which table you want: ");
//     scanf("%d", &num);
//     printf("Enter the level till which you want the table to go(i.e. 10 in 2 x 10 = 200): ");
//     scanf("%d", &level);
//     printTable(mulTable[0], num, level);
// }

// void printTable(int *mulTable, int num, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         mulTable[i] = num * (i + 1);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d x %d = %d\n", num, i + 1, mulTable[i]);
//     }
// }
