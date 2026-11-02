#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : FactDiff
// Input         : Integer
// Output        : Integer
// Description   : Calculates and Returns the Difference
//                 Between the Sum of Factors and
//                 Non-Factors of the Given Number
// Date          : 04/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

int FactDiff( int iNo )
{
    int iCnt = 0;
    int iNonFact = 0;
    int iFact = 0;
    int iDiff = 0;

    for( iCnt = 1; iCnt <= iNo ; iCnt++)
    {
       if((iNo % iCnt) != 0)
        {
          iNonFact = iNonFact + iCnt;
        }
        else
        {
          iFact = iFact + iCnt;
        }

    }

    iDiff = iFact - iNonFact;

    return iDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference is :%d\n",iRet);

    return EXIT_SUCCESS;
}