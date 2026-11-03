#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : CountTwo
// Input         : Integer
// Output        : Integer
// Description   : Counts and Returns the Frequency of
//                 Digit Two in the Given Number
// Date          : 04/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

int CountTwo( int iNo)
{  
    int iDigits = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        printf("Invalid Input\n");
        return EXIT_FAILURE;
    }

    while( iNo != 0)
    {
       iDigits = iNo % 10 ;

       if( iDigits == 2)
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

    iRet = CountTwo(iValue);

    printf("Frequency of Two is :%d\n",iRet);

    return EXIT_SUCCESS;
}