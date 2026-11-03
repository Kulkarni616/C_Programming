#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : MultFact
// Input         : Integer
// Output        : Integer
// Description   : Calculates and Returns the Multiplication
//                 of All Factors of the Given Number
// Date          : 04/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

int MultFact( int iNo )
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        printf("Invalid Input\n");
        return EXIT_FAILURE;
    }

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