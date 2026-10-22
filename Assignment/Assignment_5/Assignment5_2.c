#include <stdio.h>
#include <stdlib.h>


//////////////////////////////////////////////////////////////
//
// Function Name : CheckLeapYear
// Input         : Integer 
// Output        : None
// Description   : Checks Whether a Given Year Is a Leap Year
// Date          : 22/10/2026
// Author        : Snehal Sunil Kulkarni 
//
//////////////////////////////////////////////////////////////

void CheckLeapYear( int iYear )
{
   if((((iYear % 4) == 0) && ((iYear % 400)== 0))  || ((iYear % 100 )!= 0))
   {
      printf("Leap Year\n");
   }
   else
   {
      printf(" Not Leap Year\n");

   }
   
}

int main() 
{
    int iYear = 0;

    printf("Enter The Year : \n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}