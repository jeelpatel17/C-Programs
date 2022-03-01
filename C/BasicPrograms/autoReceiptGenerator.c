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
    fptr = fopen("receipt.txt", "w+"); // creating a .txt file to type the receipt contents in it, which will be printed later
    char name[50], itemName[50], outletName[20];

    printf("Welcome! Here you can print your purchase receipt!\nEnter your name: \n\t");
    gets(name); // asking the user to enter their name

    printf("Enter name of the item you've purchased: \n\t");
    gets(itemName); // asking the user what items they've purchased

    printf("Enter the outlet name where you shopped: \n\t");
    gets(outletName); // asking the user from which outlet they've purchased

    fprintf(fptr, "Thank You %s! for purchasing %s from My Bazaar %s Outlet.\n\n*** Stay Safe, Visit Again! ***\n\nMy Bazaar — Naye Bharat Ka Bazaar!", name, itemName, outletName);
    printf("\nYour receipt is successfully generated!\nThank you for using this receipt generator.");
    fclose(fptr);
    getch();
    return 0;
}