//Checking how many coins a cashier needs to provide to the customer for a certain change he owe him. 
//Optimizing for the most greedy way to minimize the number of coins the customer gets, most 25 cents possible, then 10 cents possbile, then 5 and 1.
#include <stdio.h>

int main(void)
{
    int n, tot, var;
    
    do
    {
        printf("changed owed: ");
        scanf("%i", &n);
    } while(n < 1 || n > 99);
    tot = n / 25;
    n -= tot * 25;
    tot += n / 10;
    n -= (n / 10) * 10;
    tot += n / 5;
    n -= (n / 5) * 5;
    tot += n;
    printf("%i\n", tot);
}