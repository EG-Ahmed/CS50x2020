#include <stdio.h>
#include <cs50.h>

int collatz(int n);

int main()                                                      //Collatz is meant to get the number of steps to until finding the number 1
{
    int x = get_int("Enter number to get it's Collatz: ");
    printf("The Collatz of (%d) = %d\n", x, collatz(x));
}

int collatz(int n)
{
        //base case
    if (n == 1)
    {
        return 0;
    }
        //even numbers
    else if ((n % 2) == 0)
    {
        return 1 + collatz(n/2);
    }
        //odd numbers
    else
    {
        return 1 + collatz(3*n + 1);
    }
}