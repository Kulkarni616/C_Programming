/*
   Input : 4

   Output: 1  a  2  b  3  c  4  d

*/


#include <stdio.h>
#include <stdlib.h>

void Pattern()
{
    int i = 0,j= 0;

   for(i=1 ; i<=3 ;i++)
   { 
      for(j = 1; j <= 4 ; j++)
      {
         printf("*\t");
      }
      printf("\n\n");
   }

    

}

int main()
{   
     Pattern();
    
    return EXIT_SUCCESS;
}