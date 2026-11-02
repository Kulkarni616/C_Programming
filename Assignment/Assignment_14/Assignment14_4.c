#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : SumNonFact
// Input         : Integer
// Output        : Integer
// Description   : Calculates and Returns the Sum of All
//                 Non-Factors of the Given Number
// Date          : 04/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

int SumNonFact( int iNo )
{
    int iCnt = 0;
    int iSum = 0;

    for( iCnt = 1; iCnt <= iNo ; iCnt++)
    {
       if((iNo % iCnt) != 0)
        {
          iSum = iSum + iCnt;
        }

    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("Summation is :%d\n",iRet);

    return EXIT_SUCCESS;
}