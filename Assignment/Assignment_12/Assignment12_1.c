#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : DisplayDigits
// Input         : Integer
// Output        : void
// Description   : Displays Each Digit of the Given Number
// Date          : 04/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

void DisplayDigits( int iNo)
{ 
    int iDigit = 0;

    if( iNo < 0)
    {
        iNo =- iNo;
    }

    while( iNo != 0)
    {
      iDigit = iNo % 10;

      iNo = iNo / 10;

      printf("%d\n",iDigit);
    }


}

int main()
{   
    int iValue = 0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return EXIT_SUCCESS;
}