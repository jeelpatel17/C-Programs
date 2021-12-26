#include <stdio.h>
#include <string.h>

void zoop() // in order to flush the previous input (healthier alternative of fflush(stdin))
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

struct travel_agency
{
    char name[50];
    int driving_license_no;
    int total_kms;
};
int main()
{
    struct travel_agency driver[3]; // allowing the structure to store 3 types of its type
    for (int i = 0; i < 3; i++)
    {
        printf("Enter your name: ");
        gets(driver[i].name);
        printf("Enter your Driving License Number: ");
        scanf("%d", &driver[i].driving_license_no);
        printf("Enter the total kms you've driven till now: ");
        scanf("%d", &driver[i].total_kms);
        zoop();
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\nMy name is %s\nMy driving license number is %d\nI've driven %d kms in total.\n", driver[i].name, driver[i].driving_license_no, driver[i].total_kms);
    }

    return 0;
}