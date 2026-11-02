#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : MultDigits
// Input         : Integer
// Output        : Integer
// Description   : Calculates and Returns the Multiplication
//                 of All Non-Zero Digits in the Given Number
// Date          : 04/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

int MultDigits( int iNo)
{  
    int iDigits = 0;
    int iCount= 0;
    int iMult = 1;

    while( iNo != 0)
    {
       iDigits = iNo % 10 ;
       
       if(iDigits != 0)
       {
        iMult = iMult * iDigits;
       }

       iNo = iNo /10;
    }

    return iMult;

}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("Multipilcation is  :%d\n",iRet);

    return EXIT_SUCCESS;
}