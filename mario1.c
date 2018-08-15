

Implement a program that prints out a double half-pyramid of a specified height, per the below.
  
  Height: 4
   #  #
  ##  ##
 ###  ###
####  ####




#include <stdio.h>
#include <cs50.h>
int main(void)
{
     int n;
     do
     {
       n = get_int("Enter an integer between 0 and 23 for Mario: ");
     }while(n<0||n>23);
     for(int i =1;i<=n;i++)
     {
          for(int j = n-i;j>0;j--)
          {
               printf(" ");

          }
          for(int k = 0; k<i;k++)
          {
               printf("#");

          }
          printf(" ");
          for(int x = 0; x <i;x++)
          {
               printf("#");
          }
          printf("\n");

     }
     return 0;




     }


