// R O C K   P A P E R   S C I S S O R S

/*    L O G I C
      rock x scissors = rock
      paper x scissors = scissor
      paper x rock = paper

      C O N C L U S I O N
      Keep repeating the game 3 times, and log/store the results of each game, 
      and display at the end the FINAL winner

      N O T E
      You've to take input the user's name and as their turn comes, it should be visible

      M Y   C A T C H 
      Keep an escape key(i.e. 0) to exit the game in the middle of it, and after 3 times, ask the player if s/he wants to play it again
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random(int num) // print a random number from 1 to passed integer
{
    srand(time(NULL));
    return rand() % num;
}

int main()
{
    int user, computer;
    return 0;
}