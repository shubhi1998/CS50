

Implement a program that calculates the minimum number of coins required to give a user change.

Change owed: 0.41
4

Code


#include <cs50.h>
#include <stdio.h>
int main(void)
{
    float dollars;
    do
    {
        dollars = get_float("Enter the change owned ");
    }while(dollars<=0);
    int cents = dollars*100;

    int count = 0;
    while(cents>=25)
    {
        cents = cents -25;
        count+=1;

    }
    while(cents>=10)
    {
        cents = cents -10;
        count+=1;

    }
    while(cents>=5)
    {
        cents = cents-5;
        count = count + 1;

    }
    while(cents>=1)
    {
        cents = cents - 1;
        count = count+1;

    }
    printf("Coins used for the amount of change owed : %i ",count);
    return 0;


}
