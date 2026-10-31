#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : DisplayOdd
// Input         : Integer
// Output        : None
// Description   : Displays Odd Numbers from 1 to Given
//                 Number
// Date          : 02/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

void DisplayOdd(int iNo)
{
  int iCnt = 0;

  if(iNo < 0)
  {
   printf("Invalid number\n");
   return;
  }

  for( iCnt = 1 ; iCnt <= iNo ; iCnt++)
  {
     if( ((iCnt % 2) != 0) )
     {
       printf("%d\t",iCnt);
     }

  }
  printf("\n");

}

int main()
{
   int iValue = 0;

   printf("Enter the Number : \n");
   scanf("%d",&iValue);

   DisplayOdd(iValue);

   return EXIT_SUCCESS; 

}