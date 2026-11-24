#include <stdio.h>
#include <stdlib.h>

int Summation( int arr[] , int iLength)
{
   int iCnt = 0 , iSum= 0;

   for( iCnt = 0 ; iCnt < iLength ;iCnt++)
   {
      iSum = iSum + arr[iCnt];
   }

   return iSum;
}

float Avarage( int arr[] , int iLength)
{
   int iCnt = 0 , iSum= 0;

   for( iCnt = 0 ; iCnt < iLength ;iCnt++)
   {
      iSum = iSum + arr[iCnt];
   }

   return ((float)(iSum/iLength));
}



int main()
{   
   int *ptr = NULL;
   int iSize = 0, iCnt = 0 , iRet = 0;
   float fRet = 0.0f;

   printf("Enter the number of elements you want :\n");
   scanf("%d",&iSize);
   
   //step 1 : Allocate the memory
   ptr = (int *)malloc(sizeof(int)*iSize); 
  
   //step 2 : use the memory
   printf("Enter the elements:\n");
   
   for( iCnt = 0 ; iCnt < iSize ; iCnt++)
   {
      scanf("%d",&ptr[iCnt]);
   }

   iRet = Summation( ptr , iSize);

   fRet = Avarage(ptr,iSize);
   
   printf("Avarage is : %f\n",fRet);

   //step 3 : free memory
   free(ptr);

   return EXIT_SUCCESS;
}

 