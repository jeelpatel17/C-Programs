/*
KM TO MILES
INCHES TO FOOT
CMS TO INCHES
POUND TO KGS
INCHES TO METERS
*/

#include <stdio.h>
#include <stdlib.h>

void zoop() // in order to flush the previous input (healthier alternative of fflush(stdin))
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

float kmToMiles()
{
    int km;
    printf("\nEnter the number of Kms to convert into Miles: ");
    scanf("%d", &km);
    float miles = ((float)km) / 1.609;
    printf("%d kms is equal to %.2f Miles.\n", km, miles);
}

float inchesToFoot()
{
    int inches;
    printf("\nEnter the number of Inches to convert into Foot: ");
    scanf("%d", &inches);
    float foot = ((float)inches) / 12;
    printf("%d Inches is equal to %.2f Foot.\n", inches, foot);
}

float cmsToInches()
{
    int cms;
    printf("\nEnter the number of Centimeters to convert into Inches: ");
    scanf("%d", &cms);
    float inches = ((float)cms) / 2.54;
    printf("%d Centimeters is equal to %.2f Inches.\n", cms, inches);
}

float poundToKgs()
{
    int pound;
    printf("\nEnter the number of Pounds to convert into Kilograms: ");
    scanf("%d", &pound);
    float kgs = ((float)pound) / 2.205;
    printf("%d Pounds is equal to %.2f Kilograms.\n", pound, kgs);
}

float inchesToMeters()
{
    int inches;
    printf("\nEnter the number of Inches to convert into Meters: ");
    scanf("%d", &inches);
    float meters = ((float)inches) / 1.609;
    printf("%d inches is equal to %.2f meters.\n", inches, meters);
}

int main()
{
    int choice, again;
    printf("Enter the converter digit in which you want to enter: \n");
    printf("1.KM TO MILES\t 2.INCHES TO FOOT\t 3.CMS TO INCHES\t 4.POUND TO KGS\t 5.INCHES TO METERS\n\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        kmToMiles();
        break;
    case 2:
        inchesToFoot();
        break;
    case 3:
        cmsToInches();
        break;
    case 4:
        poundToKgs();
        break;
    case 5:
        inchesToMeters();
        break;

    default:
        break;
    }
    zoop();
    printf("\nDo you wanna convert again(1 = yes, 0 = no): ");
    scanf("%d", &again);
    if (again == 1)
    {
        main();
    }
    else
    {
        exit(0);
    }

    return 0;
}