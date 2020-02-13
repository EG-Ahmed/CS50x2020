#include <cs50.h>
#include <stdio.h>
#include <unistd.h> // for sleep() function!

int operation;
double result = 0 ;
double x,y;

double sum(void);
double sub(void);
double mul(void);
double divv(void);

int main()
{
    do
    {
        operation = get_int("Select\n     (1)Sum\n     (2)Sub\n     (3)Mul\n     (4)Div\nYour Choice:");
        printf("\e[2J\e[H");

        if (operation == 1) {
            printf("###   Sum.   ###\n\n");
            result = sum();
            printf("\n\nResult = %.1lf\n\n",result);

        } else if (operation == 2) {
            printf("###   Sub.   ###\n");
            result = sub();
            printf("\n\nResult = %.1lf\n\n",result);

        } else if (operation == 3) {
            printf("###   Mul.   ###\n");
            result = mul();
            printf("\n\nResult = %.1lf\n\n",result);

        } else if (operation == 4) {
            printf("###   Div.   ###\n");
            result = divv();
            printf("\n\nResult = %.1lf\n\n",result);

        } else {
            printf("###   ERROR   ###\n");
            printf("Please try again after loading  ");
            sleep(1);
            for(int i=0; i<100; i+=25)
            {
                printf("%i%%",i);
                sleep(1);
                printf(" ... ");
                sleep(1);
            }
            printf("100%%");
            sleep(1);
            printf("\n");
            printf("\e[2J\e[H");
        }

    } while (operation != 1 || operation != 2 || operation != 3 || operation != 4);


}

double sum()
{
    printf("Enter first num: ");
    scanf("%lf", &x);
    printf("Enter Second num: ");
    scanf("%lf", &y);
    return x+y;
}

double mul()
{
    printf("Enter first num: ");
    scanf("%lf", &x);
    printf("Enter Second num: ");
    scanf("%lf", &y);
    return x*y;
}

double sub()
{
    printf("Enter first num: ");
    scanf("%lf", &x);
    printf("Enter Second num: ");
    scanf("%lf", &y);
    return x-y;
}

double divv()
{
    printf("Enter first num: ");
    scanf("%lf", &x);
    printf("Enter Second num: ");
    scanf("%lf", &y);
    return x/y;
}
