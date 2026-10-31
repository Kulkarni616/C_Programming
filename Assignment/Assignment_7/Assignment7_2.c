#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : Integer
// Output        : None
// Description   : Displays Numbers from 1 to Given Number
// Date          : 02/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////


void Display( int iNo)
{
   int iCnt = 0;

   if(iNo < 0)
   {
      printf("Invalid Input\n");
      return;
   }
   

   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
      printf("%d\t",iCnt);
   }
   printf("\n");
  
}

int main()
{  
   int iValue = 0;

   printf("Enter the number:\n");
   scanf("%d",&iValue);

   Display(iValue);

   return EXIT_SUCCESS; 

}