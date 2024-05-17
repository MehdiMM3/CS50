//Building Mario's pyramid with '#' with some space in the center.
#include <stdio.h>

int main(void)
{
    int i, j, k, n;
    
    //Asking for a valid input from the user.
    do 
    {
        printf("give me a height between 1 and 8: \n");
        scanf("%i", &n);
    } while(n < 1 || n > 8);
    //Creating a loop for pyramid length.
    for(i = 0; i < n ; i++)
    {   //Creating a loop for the first half of pyramid width.
        for(j = 0; j < n; j++)
        {
            if(n <= j + i + 1)
                printf("#");
            else
                printf(" ");
        }   //Creating a loop for the space and the second half of pyramid width.
        for(k = n; k < n * 2 + 2; k++)
        {
            if(k < n + 2)
                printf(" ");
            else if(k < n + 3 + i)
                printf("#");
        }
        //Separate the length from the width with "\n".
        printf("\n");
    }
}
