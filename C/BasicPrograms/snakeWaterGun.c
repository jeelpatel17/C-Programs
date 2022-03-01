#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakeWaterGun(char me, char comp)
{
    if (me == comp)
    {
        return 0;
    }
    if (me == 's' && comp == 'w' || me == 'w' && comp == 'g' || me == 'g' && comp == 's')
    {
        return 1;
    }
    if (me == 's' && comp == 'g' || me == 'w' && comp == 's' || me == 'g' && comp == 'w')
    {
        return -1;
    }
}

void main()
{
    srand(time(0));
    char me, comp;
    char compStr[20];
    int compChoice = rand() % (2 + 1);
    if (compChoice == 0)
    {
        comp = 's';
    }
    else if (compChoice == 1)
    {
        comp = 'w';
    }
    else if (compChoice == 2)
    {
        comp = 'g';
    }

    printf("Snake, Water or Gun? (s/w/g): \n");
    scanf("%c", &me);
    int result = snakeWaterGun(me, comp);
    if (result == 0)
    {
        printf("The game is draw!");
    }
    else if (result == 1)
    {
        printf("You Won!");
    }
    else if (result == -1)
    {
        printf("You lost! Computer Won. Computer chose %c", comp);
    }
}