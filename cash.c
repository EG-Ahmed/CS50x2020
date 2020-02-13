#include <stdio.h>//includes cs50 library
#include <math.h>//includes math library
#include <cs50.h>

int main()
{
    int cents_owed;

    do
    {
        float dollars_owed = get_float("Change owed: ");//get number from user
        cents_owed = round(dollars_owed * 100);
    }
    while (cents_owed <= 0);

    int quarters = cents_owed / 25;
    int dimes = (cents_owed % 25) / 10;
    int nickels = ((cents_owed % 25) % 10) / 5;
    int pennies = ((cents_owed % 25) % 10) % 5;

    printf("%d\n", quarters + dimes + nickels + pennies);
}
