#include <cs50.h>//includes cs50 library
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        height = get_int("Height: ");//get the height from user
    }
    while (height < 1 || height > 8);

    if (height > 0 || height < 9)
    {
        int counter = 0;
        for (int row = 0; row < height; row++)
        {
            if (counter != height)
            {
                for (int spaces = (height - 1) - counter; spaces > 0; spaces--)
                {
                    printf(" ");//print spaces
                }
                for (int hashes = 0; hashes <= counter; hashes++)
                {
                    printf("#");//print hashes
                }

                printf("  ");

                for (int hashes = 0; hashes <= counter; hashes++)
                {
                    printf("#");
                }

                printf("\n");//start new line
                counter++;
            }
        }
    }
}
