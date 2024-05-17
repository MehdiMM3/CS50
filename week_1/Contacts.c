// CS50
// Get data from user and print out it

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string full_name = get_string("What's your full name: ");
    int age = get_int("How old are you? ");
    int number = get_int("What's your phone number: ");

    printf("%s", full_name);
    printf("%i", age);
    printf("%i", number);
}