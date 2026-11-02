#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : CountRange
// Input         : Integer
// Output        : Integer
// Description   : Counts and Returns the Frequency of
//                 Digits Between 3 and 7 in the Given Number
// Date          : 04/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

int CountRange( int iNo)
{  
    int iDigits = 0;
    int iCount= 0;

    while( iNo != 0)
    {
       iDigits = iNo % 10 ;

       if((iDigits >= 3) && (iDigits <= 7))
       {
         iCount++;
       }

       iNo = iNo /10;
    }

    return iCount;

}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("Frequency is  :%d\n",iRet);

    return EXIT_SUCCESS;
}