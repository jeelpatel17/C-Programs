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
    printf("Enter the old number of employees: ");
    scanf("%d", &sizeOfArr);
    struct staff employee[sizeOfArr];               // defining an array of structures
    ptr = (int *)malloc(sizeOfArr * (sizeof(int))); // allocating them memory dynamically so that if anyone wants to either enter data of 2 employees or 2000 employees, they can do that!

    // to do this operation with CALLOC, change '(int *)malloc(sizeOfArr * (sizeof(int)))' to '(int *)calloc(sizeOfArr, (sizeof(int)))'
    // to realloc - instead of '(int *)malloc(sizeOfArr * (sizeof(int)))' go for '(int *)realloc(ptr, sizeOfArr * (sizeof(int)))' - - - But you need to shift this line of code inbetween the code from where you want your memory to be reallocated

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

    // TO REALLOC, SAMPLE PIECE OF CODE
    printf("Enter the new number of employees: ");
    scanf("%d", &sizeOfArr);
    ptr = (int *)realloc(ptr, sizeOfArr * (sizeof(int)));
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

    free(ptr); // to free the existing allocated memory

    return 0;
}