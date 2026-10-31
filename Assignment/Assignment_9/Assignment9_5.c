#include <stdio.h>
#include <stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iOdd = 1;
    int iEven = 1;
    int iDiff = 0;


    if(iNo < 0)
    {
        iNo =- iNo ;
    }

    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEven = iEven * iCnt;
        }
        else
        {
            iOdd = iOdd * iCnt;
        }
    }
    
    iDiff = iEven - iOdd;

    return iDiff ;

}

int main()
{   
    int ivalue = 0, iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&ivalue);

    iRet = FactorialDiff(ivalue);

    printf("Factorial Difference is %d\n",iRet);

    return EXIT_SUCCESS;
}