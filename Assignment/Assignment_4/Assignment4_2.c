#include <stdio.h>
#include <stdlib.h>


////////////////////////////////////////////////////////
//
// Function Name : CheckEvenOdd
// Input         : Integer 
// Output        : None
// Description   : Checks Whether a Number Is Even or Odd
// Date          : 22/10/2026
// Author        : Snehal Sunil Kulkarni 
//
////////////////////////////////////////////////////////

void CheckEvenOdd( int iValue)
{
     if(iValue % 2 == 0 )
     {
        printf("Number is Even\n");
     }
     else
     {
        printf("Number is Odd\n");
     }
}

int main() 
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}