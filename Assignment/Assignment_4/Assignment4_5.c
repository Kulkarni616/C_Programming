#include <stdio.h>
#include <stdlib.h>


////////////////////////////////////////////////////////
//
// Function Name : CheckDivisibility
// Input         : Integer 
// Output        : None
// Description   : Checks Whether a Number Is Divisible
//                 by 5
// Date          : 22/10/2026
// Author        : Snehal Sunil Kulkarni 
//
////////////////////////////////////////////////////////

void CheckDivisibility(int iValue)
{  
    if(iValue % 5 == 0)
    {
      printf("Number is Divisible by 5\n");
    }
    else
    {
      printf("Number is Not Divisible by 5\n");
    }
}

int main() 
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}