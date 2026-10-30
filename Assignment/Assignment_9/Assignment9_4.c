#include <stdio.h>
#include <stdlib.h>

int OddFactorialNumber(int iNo)
{
    int iCnt = 0;
    int iAns = 1;

    if(iNo < 0)
    {
        iNo =- iNo ;
    }

    for( iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
        iAns = iCnt * iAns;
        }
    }

    return iAns ;

}

int main()
{   
    int ivalue = 0, iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&ivalue);

    iRet = OddFactorialNumber(ivalue);

    printf("Odd Factorial Number is %d\n",iRet);

    return EXIT_SUCCESS;
}