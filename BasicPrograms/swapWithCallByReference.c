#include <stdio.h>

void swap(int *v1, int *v2)
{
    int temp = *v1;
    *v1 = *v2;
    *v2 = temp;
}

int main()
{
    int a = 29, b = 23;
    printf("Before swap: %d %d\n", a, b);
    swap(&a, &b); // passing the address of the variables, so that the actual value changes, not only the copies of it!
    printf("After swap: %d %d", a, b);
    // YAY, WE DID IT!
    return 0;
}