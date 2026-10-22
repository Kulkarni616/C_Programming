#include <stdio.h>
#include <stdlib.h>


/////////////////////////////////////////////////////////////////
//
// Function Name : CheckNumber
// Input         : Integer 
// Output        : None
// Description   : Checks Whether a Number Is Positive,
//                 Negative, or Zero
// Date          : 22/10/2026
// Author        : Snehal Sunil Kulkarni 
//
/////////////////////////////////////////////////////////////////

void CheckNumber( int iValue)
{
     if(iValue > 0 )
     {
        printf("Number is Positive\n");
     }
     else if (iValue == 0)
     {
        printf("Zero\n");
     }
     else
     {
        printf("Number is Negative\n");
     }
}

int main() 
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}