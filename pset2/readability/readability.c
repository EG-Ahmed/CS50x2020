#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int letter = 0;
int word = 0 ;
int sentence = 0;


int main(void)
{
    string article = get_string("Text: ");       // prompt the user with the question
    int n = strlen(article);                  // set the length of article

    if (isalnum(article[0]))        /* add +1 if the article starts with alphanumeric letter */
    {
        word = 1;
    }

    for (int i = 0; i < n;  i++)    /* count words */
    {
        if (isalnum(article[i]))         // count letters
        {
            letter++;
        }

        if (i < n - 1 && isspace(article[i]) && isalnum(article[i + 1]))        // count words

        {
            word++;
        }


        if (i > 0 && (article[i] == '!' || article[i] == '?' || article[i] == '.' || article[i] == '"' || article[i] == ':')
            && isalnum(article[i - 1]))
        {
            sentence++;
        }

    }


    float L = 100 * ((float)letter / word);
    float S = 100 * ((float)sentence / word);

    float grade = (0.0588 * L) - (0.296 * S) - (15.8);

    int x = round(grade);


    if (x <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if (x <= 16)
    {
        printf("Grade %i\n", x);
    }
    else
    {
        printf("Grade 16+\n");
    }
}