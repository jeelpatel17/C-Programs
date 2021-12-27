#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}
int main()
{
    // THE CONCEPT OF FUNCTION POINTERS
    int (*fPtr)(int, int); // point to a function which takes int as a parameter and returns int as well
    fPtr = &sum;           // now, store the address where sum function is located
    int d = (*fPtr)(4, 6); // the (*fPtr) would be replaced with sum and will fetch function outcome. This is also known as 'Dereferencing a function pointer'
    printf("%d", d);
    return 0;
}