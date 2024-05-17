#include <stdio.h>

int main() 
{
    int i, j, n;
    
    do {
        printf("give me the pyramide height: ");
        scanf("%i", &n);
    } while(n <= 1 || n != n);
    for (i = 0; i < n ; i++)
    {
        for (j = n; j > 0; j--)
        {
            if (j > i + 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
    
    return 0;
}
