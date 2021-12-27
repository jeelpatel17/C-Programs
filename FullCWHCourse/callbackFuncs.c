#include <stdio.h>
#include <stdlib.h>

int sumSub(int a, int b)
{
    printf("Sum: %d, Subtraction: %d", a + b, a - b);
}
int middleMen(int a, int b, int (*sumSub)(int, int))
{
    return sumSub(a, b);
}
int main()
{
    int ae, bi, addSub;
    printf("Enter 1 number: ");
    scanf("%d", &ae);
    printf("Enter 2 number: ");
    scanf("%d", &bi);
    addSub = middleMen(ae, bi, sumSub);
    return 0;
}