#include <stdio.h>
#include <string.h>

void parseIt(char *tag)
{
    int gate = 0, index = 0;              // to keep a track of two cursors, one on which we will be, and another which till the character we want terminate the tag to
    for (int i = 0; i < strlen(tag); i++) // strlen(tag) is for calculating the number of total characters in the string
    {
        if (tag[i] == '<') // if < comes in the iteration, turn the switch(here, gate variable) ON, and skip the whole code after this block
        {
            gate = 1;
            continue;
        }
        else if (tag[i] == '>') // if > comes, turn the switch OFF, indicating that the tag has been over now and skip the code below
        {
            gate = 0;
            continue;
        }
        if (gate == 0) // as the tag is over now, we can make the string be stored in the same array in which it was passed
        {
            tag[index] = tag[i]; // the index in the first iteration will be 0, and i will be 6(as we have '<h1> ' before the actual string), hence the string would be moved to left eliminating everything except the string itself
            index++;             // in order to check until the string has arrived, we must increment it after every iteration
        }
    }
    tag[index] = '\0'; // to remove the spaces after the string, we need to insert '\0' to indicate that the string is over(with spaces, right now, in the first iteration)

    while (tag[0] == ' ') // to remove the spaces before the string
    {
        for (int i = 0; i < strlen(tag); i++)
        {
            tag[i] = tag[i + 1]; // [in first iteration, and so on..] we need to shift the second space with first space till we no more have any spaces, then this while loop won't run
        }
    }
    while (tag[(strlen(tag)) - 1] == ' ')
    {
        tag[(strlen(tag)) - 1] = '\0'; // [in first iteration, and so on..] we need to shift the last space with last space till we no more have any spaces, then this while loop won't run
    }
}

int main()
{
    char tag[] = "<h1>  this is a heading  </h1>";
    parseIt(tag);
    printf("- - -%s- - -", tag);
    return 0;
}