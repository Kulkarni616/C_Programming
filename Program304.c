#include <stdio.h>
#include <stdlib.h>


int main()
{   
   int arr[4] = {0};  //local array

   int iCnt = 0;

   printf("Enter the elements of array: \n");

   for( iCnt = 0 ; iCnt < 4 ; iCnt++)
   {
      scanf("%d",&arr[iCnt]);  //for address use &
   }
    

   printf("Elements of array : \n");

   for( iCnt = 0 ; iCnt<4 ;iCnt++)
   {

      printf("%d\n",arr[iCnt]);

   }
 

   return EXIT_SUCCESS;
}

