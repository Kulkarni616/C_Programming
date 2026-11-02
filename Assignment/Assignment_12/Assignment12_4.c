#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : CountFour
// Input         : Integer
// Output        : Integer
// Description   : Counts and Returns the Frequency of
//                 Digit Four in the Given Number
// Date          : 04/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

int CountFour( int iNo)
{  
    int iDigits = 0;
    int iCount = 0;

    while( iNo != 0)
    {
       iDigits = iNo % 10 ;

       if( iDigits == 4)
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

    iRet = CountFour(iValue);

    printf("Frequency of Four is :%d\n",iRet);

    return EXIT_SUCCESS;
}