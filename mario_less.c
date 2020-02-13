#include <cs50.h>//includes the cs50 library
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height:");//get the height of the pyramid from user
    }
    while (height < 1 || height > 8);

    for(int i=1; i<=height; i++)
    {
        for(int j=1; j<=height-i; j++)
        {
            printf(" ");//spaces for shiftting the pyramid to right
        }
        for(int j=1; j<=i; j++)
        {
            printf("#");//draw the pyramid
        }
        printf("\n");//starts a new line of hashes
    }
}
