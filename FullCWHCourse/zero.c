#include <stdio.h>
#include <stdlib.h>

void zoop() // in order to flush the previous input (healthier alternative of fflush(stdin))
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

struct staff
{
    int id;
    char name[50];
    char position[50];
};

int main()
{
    int *ptr, sizeOfArr;
    printf("Enter the number of employees you want to enter the data of: ");
    scanf("%d", &sizeOfArr);
    struct staff employee[sizeOfArr];               // defining an array of structures
    ptr = (int *)malloc(sizeOfArr * (sizeof(int))); // allocating them memory dynamically so that if anyone wants to either enter data of 2 employees or 2000 employees, they can do that!

    for (int i = 0; i < sizeOfArr; i++)
    {
        printf("Enter the id of employee %d: ", i + 1);
        scanf("%d", &employee[i].id);
        zoop();
        printf("Enter the name of employee %d: ", i + 1);
        gets(employee[i].name);
        printf("Enter the position of employee %d: ", i + 1);
        gets(employee[i].position);
    }
    printf("Yay! Data successfully stored!");

    return 0;
}