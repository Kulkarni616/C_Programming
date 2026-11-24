#include <stdio.h>
#include <stdlib.h>


void Display( int arr[] , int iLength)
{
   int iCnt = 0;
   for( iCnt = 0 ; iCnt < iLength ;iCnt++)
   {
      printf("%d\n",arr[iCnt]);
   }
}

int main()
{   
   int Brr[5]={11,21,51,101,111};
   
   Display(Brr,5);  //Display(100,7)
  
   return EXIT_SUCCESS;
}

 