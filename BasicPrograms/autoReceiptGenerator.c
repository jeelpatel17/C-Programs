/*  
    A U T O M A T I C   R E C E I P T   G E N E R A T O R
*/

#include <stdio.h>
#include <conio.h>

void zoop() // in order to flush the previous input (healthier alternative of fflush(stdin))
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

int main()
{
    FILE *fptr;
    fptr = fopen("receipt.txt", "w+");
    char name[50], itemName[50], outletName[20];
    printf("Welcome! Here you can print your purchase receipt!\nEnter your name: \n\t");
    gets(name);
    printf("Enter name of the item you've purchased: \n\t");
    gets(itemName);
    printf("Enter the outlet name where you shopped: \n\t");
    gets(outletName);
    fprintf(fptr, "Thank You %s! for purchasing %s from Big Bazaar %s Outlet.\n\n*** Stay Safe, Visit Again! ***\n\nBig Bazaar — Naye India Ka Bazaar!", name, itemName, outletName);
    printf("\nYour receipt is successfully generated!\nThank you for using this receipt generator.");
    fclose(fptr);
    getch();
    return 0;
}