#include <stdio.h>
#include <stdlib.h>


int main()
{   
   float arr[4] = {0.0f};  //local array

   int iCnt = 0;

   printf("Enter the elements of array: \n");

   for( iCnt = 0 ; iCnt < 4 ; iCnt++)
   {
      scanf("%f",&arr[iCnt]);  //for address use &
   }
    

   printf("Elements of array : \n");

   for( iCnt = 0 ; iCnt<4 ;iCnt++)
   {

      printf("%f\n",arr[iCnt]);

   }
 

   return EXIT_SUCCESS;
}

//creaters of creaters = book
//programing of process lanugae ppl
//dimistick of computer 