// CS50
// Make a left half pyramid of '#'

#include <cs50>
#include <stdio.h>

void toul(int n);

int main(void)
{
    int height = get_int("give me the height of the half pyramid");
    int i, j;
    // Loop for the height.
    for (i = 0; i < height; i++)
    {   // Loop for the lenght.
        for (j = 0; j < height; j++)
        {   // Print j of # in each line.
            toul(j + 1);
        }
        printf("\n");
    }
}

void toul(int n)
{
    int i;
    
    for (i = 0; i < n; i++)
    {
        printf("#");
    }
}