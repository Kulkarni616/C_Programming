#include <stdio.h>
#include <stdlib.h>

int MultFact( int iNo )
{
    int iCnt = 0;
    int iMult = 1;

    for( iCnt = 1 ; iCnt <= iNo/2 ; iCnt++ )
    {
       if((iNo % iCnt) == 0)
       {
         iMult = iMult * iCnt;
       }
    }

    return iMult;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multipication is : %d\n",iRet);

    return EXIT_SUCCESS;
}