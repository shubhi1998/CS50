

Implement a program that prints out a half-pyramid of a specified height, per the below.

$ ./mario
Height: 5
    ##
   ###
  ####
 #####
######


Code


#include <stdio.h>
#include <cs50.h>
int main(void)
{
     int n;
     do
     {
       n = get_int("Enter an integer between 0 and 23 for Mario: ");
     }while(n<0||n>23);
     for(int i = 1;i<=n;i++)
     {
         for(int j = n-i;j>0;j--)
         {
             printf(" ");

         }
         for(int k = 1 ;k<=i+1;k++)
         {
             printf("#");
         }
         printf("\n");

     }


}
