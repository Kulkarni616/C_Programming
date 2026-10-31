#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Input         : Integer
// Output        : None
// Description   : Displays a Pattern of $ and * Symbols
// Date          : 02/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

void Pattern( int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
      printf("$\t*\t");
    }
    printf("\n");
  
}

int main()
{  
   int iValue = 0;

   printf("Enter the number:\n");
   scanf("%d",&iValue);

   Pattern(iValue);

   return EXIT_SUCCESS; 

}