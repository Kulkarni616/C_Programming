#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : CountOdd
// Input         : Integer
// Output        : Integer
// Description   : Counts and Returns the Frequency of
//                 Odd Digits in the Given Number
// Date          : 04/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

int CountOdd( int iNo)
{  
    int iDigits = 0;
    int iCountOdd = 0;

    while( iNo != 0)
    {
       iDigits = iNo % 10 ;

       if((iDigits % 2) != 0)
       {
         iCountOdd++;
       }

       iNo = iNo /10;
    }

    return iCountOdd;

}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("Frequency of odd number is  :%d\n",iRet);

    return EXIT_SUCCESS;
}