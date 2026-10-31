#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : Factorial
// Input         : Integer
// Output        : Integer
// Description   : Calculates and Returns the Factorial
//                 of a Given Number
// Date          : 02/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt = 0;
    int iAns = 1;

    if(iNo < 0)
    {
        iNo =- iNo ;
    }

    for( iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        iAns = iCnt * iAns;
    }

    return iAns ;

}

int main()
{   
    int ivalue = 0, iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&ivalue);

    iRet = Factorial(ivalue);

    printf("Factorial is %d\n",iRet);

    return EXIT_SUCCESS;
}