#include <stdio.h>

void main()
{
    FILE *ptr;
    int num;
    printf("Enter the number of which table you want to generate: ");
    scanf("%d", &num);
    ptr = fopen("generated.txt", "w");
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d X %d = %d\n", num, i, num * i);
    }
    printf("Congratulations!");
    fclose(ptr);
}