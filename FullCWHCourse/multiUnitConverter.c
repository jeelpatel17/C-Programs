/*
KM TO MILES
INCHES TO FOOT
CMS TO INCHES
POUND TO KGS
INCHES TO METERS
*/

#include <stdio.h>

float kmToMiles()
{
    int km;
    printf("Enter the number of km to convert into miles: ");
    scanf("%d", &km);
    float miles = ((float)km) / 1.609;
    printf("%d kms is equal to %f miles.", km, miles);
}

int main()
{
    int choice;
    printf("Enter the converter digit in which you want to enter: \n");
    printf("1.KM TO MILES\t 2.INCHES TO FOOT\t 3.CMS TO INCHES\t 4.POUND TO KGS\t 5.INCHES TO METERS\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        kmToMiles();
        break;
    case 2:
        kmToMiles();
        break;
    case 3:
        kmToMiles();
        break;
    case 4:
        kmToMiles();
        break;
    case 5:
        kmToMiles();
        break;

    default:
        break;
    }
    kmToMiles();
    return 0;
}