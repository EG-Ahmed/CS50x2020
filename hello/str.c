// Prints string char by char, one per line, using strlen

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input:  ");
    printf("Output: \n");

    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c\n", s[i]);
    }
    printf("\n");
}

// #include <cs50.h>
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     string s = get_string("Text: ");
//     int word = 0;
//     int letter = 0;


//     for(int i=0; i<strlen(s); i++)
//     {

//     }
//     printf("\n");
// }
