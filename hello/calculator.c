//
//  Calculator.c
//  CS50
//
//  Created by MoHaMeD on 2/10/20.
//  Copyright © 2020 MoHaMeD. All rights reserved.
//
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h> // for exit() function!
#include <unistd.h> // for sleep() function!

int operation;
double result = 0 ;
double x,y;

double sum(void);
double sub(void);
double mul(void);
double divv(void);
void calc(void);

int main(void)
{
    calc();
    char flag = get_char("Again? (Y/N): ");

    do
    {
        if(flag == 'y' || flag == 'Y')
        {
            printf("\e[2J\e[H");
            calc();
            flag = get_char("Again? (Y/N): ");
        }
        else if(flag == 'n' || flag == 'N')
        {
            exit(0);
        }
    } while (flag != 'y' || flag != 'Y' || flag != 'n' || flag != 'N');
}

double sum(void)
{
    x = get_double("Enter first num : ");
    y = get_double("Enter second num: ");
    return x+y;
}

double mul(void)
{
    x = get_double("Enter first num : ");
    y = get_double("Enter second num: ");
    return x*y;
}

double sub(void)
{
    x = get_double("Enter first num : ");
    y = get_double("Enter second num: ");
    return x-y;
}

double divv(void)
{
    x = get_double("Enter first num : ");
    y = get_double("Enter second num: ");
    return x/y;
}


void calc(void)
{
    operation = get_int("Select\n     (1)Sum\n     (2)Sub\n     (3)Mul\n     (4)Div\nYour Choice: ");
    printf("\e[2J\e[H");

    if (operation == 1)
    {
        printf("###   Sum.   ###\n\n");
        result = sum();
        printf("\n\nResult = %.1lf\n\n",result);
        sleep(1);

    } else if (operation == 2)
    {
        printf("###   Sub.   ###\n");
        result = sub();
        printf("\n\nResult = %.1lf\n\n",result);
        sleep(1);

    } else if (operation == 3)
    {
        printf("###   Mul.   ###\n");
        result = mul();
        printf("\n\nResult = %.1lf\n\n",result);
        sleep(1);

    } else if (operation == 4)
    {
        printf("###   Div.   ###\n");
        result = divv();
        printf("\n\nResult = %.1lf\n\n",result);
        sleep(1);

    } else
    {
        printf("###   ERROR   ###\n");
        printf("Please try again after loading  ");
        sleep(1);
        for(int i=0; i<100; i+=25)
        {
            printf("%i%%",i);
            sleep(1);
            printf(" .");
            sleep(1);
            printf(".");
            sleep(1);
            printf(". ");
            sleep(1);
        }

        printf("100%%");
        sleep(1);
        printf("\n");
        printf("\e[2J\e[H");
        calc();
    }
}