#include <stdio.h>
#include <stdlib.h>

int CountDiff( int iNo)
{  
    int iDigits = 0;
    int iDiff = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    while( iNo != 0)
    {
       iDigits = iNo % 10 ;

       if((iDigits % 2) != 0)
       { 
         iEvenSum = iEvenSum + iDigits;
       }
       else
       {
         iOddSum = iOddSum + iDigits;
       }

       iNo = iNo /10;
    }
    
    iDiff = iOddSum - iEvenSum;
    return iDiff;

}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Summation is :%d\n",iRet);

    return EXIT_SUCCESS;
}