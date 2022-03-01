#include <stdio.h>

int checkcheck(char chaInput) // pass character
{
    char ret[20];
    if (chaInput == 'y' || chaInput == 'Y')
    {
        ret[20] = printf("Okay, great!\n");
        main();
    }
    else if (chaInput == 'n' || chaInput == 'N')
    {
        ret[20] = printf("As you wish!");
    }
    return ret[20];
}

int main()
{
    int num;
    char chInput;
    char inp;

    printf("Enter a number to check its divisibility by 2\n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Divisible by 2!\n\n");
        printf("Wanna play again? [y/n]\n\n");
        scanf(" %c", &inp);
        checkcheck(inp);
    }
    else if (num % 2 != 0)
    {
        printf("Oops! It's not divisible!\n\n");
        printf("Wanna play again? [y/n]\n\n");
        scanf(" %c", &inp);
        checkcheck(inp);
    }

    return 0;
}
