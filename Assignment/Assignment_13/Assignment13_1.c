#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : CountEven
// Input         : Integer
// Output        : Integer
// Description   : Counts and Returns the Frequency of
//                 Even Digits in the Given Number
// Date          : 04/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

int CountEven( int iNo)
{  
    int iDigits = 0;
    int iCountEven = 0;

    while( iNo != 0)
    {
       iDigits = iNo % 10 ;

       if((iDigits % 2) == 0)
       {
         iCountEven++;
       }

       iNo = iNo /10;
    }

    return iCountEven;

}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("Frequency of even number is  :%d\n",iRet);

    return EXIT_SUCCESS;
}