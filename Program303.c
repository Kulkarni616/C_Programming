#include <stdio.h>
#include <stdlib.h>


int main()
{   
   int arr[4] = {0};  //local array

   int iCnt = 0;

   printf("Enter the elements of array: \n");

   scanf("%d",&arr[0]);  //for address use &
   scanf("%d",&arr[1]);
   scanf("%d",&arr[2]);
   scanf("%d",&arr[3]);

   printf("Elements of array : \n");

   for( iCnt = 0 ; iCnt<4 ;iCnt++)
   {

      printf("%d\n",arr[iCnt]);

   }
 

   return EXIT_SUCCESS;
}

