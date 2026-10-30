#include <stdio.h>
#include <stdlib.h>

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