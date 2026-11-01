#include <stdio.h>
#include <stdlib.h>

int SumNonFact( int iNo )
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

    iRet = SumNonFact(iValue);

    printf("Difference is :%d\n",iRet);

    return EXIT_SUCCESS;
}