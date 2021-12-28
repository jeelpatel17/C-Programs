// R O C K   P A P E R   S C I S S O R S

/*    L O G I C
      rock x scissors = rock
      paper x scissors = scissor
      paper x rock = paper
      
    user wons in
      2 x 1 p r
      3 x 2 s p
      1 x 3 r s

      cpu wons in:
      2 x 3 p s
      3 x 1 s r
      1 x 2 r p
    
    user wons in
      2 x 1 p r
      3 x 2 s p
      1 x 3 r s

      cpu wons in:
      2 x 3 p s
      3 x 1 s r
      1 x 2 r p

      C O N C L U S I O N
      Keep repeating the game 3 times, and log/store the results of each game, 
      and display at the end the FINAL winner

      N O T E
      You've to take input the user's name and as their turn comes, it should be visible

      M Y   C A T C H 
      Keep an escape key(i.e. 0) to exit the game in the middle of it, and after 3 times, ask the player if s/he wants to play it again
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void zoop() // in order to flush the previous input (healthier alternative of fflush(stdin))
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

int timeout(int seconds)
{
    clock_t endwait;
    endwait = clock() + seconds * CLOCKS_PER_SEC;
    while (clock() < endwait)
    {
    }
    return 1;
}

int random(int num) // print a random number from 1 to passed integer
{
    srand(time(NULL));
    return 1 + (rand() % num); // preventing 0 to be included
}

int rps(char user, char cpu)
{
    int result;
    if (user != 'r' && user != 'p' && user != 's') // in case if the user enters some other character than r/p/s
    {
        printf("Invalid choice, please try again!\n");
    }
    else if ((user == 'r' && cpu == 'r') || (user == 'p' && cpu == 'p') || (user == 's' && cpu == 's')) // these are the fixed outcomes in which the game gets tied
    {
        printf("Game Tied!\n");
        result = 0;
    }
    else if ((user == 'p' && cpu == 'r') || (user == 's' && cpu == 'p') || (user == 'r' && cpu == 's')) // these are the fixed outcomes in which the user wins
    {
        printf("You won!\n");
        result = 1;
    }
    else if ((user == 'p' && cpu == 's') || (user == 's' && cpu == 'r') || (user == 'r' && cpu == 'p')) // these are the fixed outcomes in which the user loses
    {
        printf("You lost!\n");
        result = -1;
    }
    return result;
}

int main()
{
    char user, pc, name[20];             // initializing choice variables, in which the user's choice will be stored and a random integer for pc
    int results[3], flag = 0, startStop; // results[] for storing 3 results, and flag for checking who has won more times, in order to decide the final winner
    int cpuChoice = random(3);
    if (cpuChoice == 1)
    {
        pc = 'r';
    }
    else if (cpuChoice == 2)
    {
        pc = 'p';
    }
    else
    {
        pc = 's';
    }

    printf("\n\nWelcome to Rock, Paper, Scissors!\n\n");
    printf("Enter your name to continue: ");
    scanf("%s", &name);
    zoop();
    for (int i = 0; i < 3; i++)
    {
        printf("\n%s (Choose one - r/p/s): ", name);
        scanf("%c", &user);
        results[i] = rps(user, pc); // logging the 3 results in the results[] array, so that we can decide the final winner
        zoop();
    }
    for (int i = 0; i < 3; i++) // running a loop to check who has won more times, and incrementing flag var
    {
        if (results[i] == 1)
        {
            flag++;
        }
        else if (results[i] == -1)
        {
            flag--;
        }
        else
        {
            continue;
        }
    }
    // announcing the final winner by checking the number of wins
    if (flag == 1 || flag == 2 || flag == 3)
    {
        printf("\nCongratulations! You're the final winner!\n");
    }
    else if (flag == -1 || flag == -2 || flag == -3)
    {
        printf("\nSorry, you lost the whole game!\n");
    }
    else
    {
        printf("\nThe Whole Game tied! Well Played!\n");
    }
    printf("\nPress 1 if you want to play again, 0 if you want to exit: \n");
    scanf("%d", &startStop);
    if (startStop == 1)
    {
        main();
    }
    else
    {
        printf("\nTHANKS FOR PLAYING!");
        if (timeout(3) == 1)
        {
            exit(0);
        }
    }

    return 0;
}