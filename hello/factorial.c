#include <stdio.h>
#include <cs50.h>

int fact(int n);

int main()
{
    int x = get_int("Enter number to get it's Factorial: ");
    printf("The Factorial of (%d) = %d\n", x, fact(x));
}

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}