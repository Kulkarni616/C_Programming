#include <stdio.h>
#include <stdlib.h>

#define KM_To_Meter 1000

int KMtoMeter ( int iNo)
{
    if( iNo < 0)
    {
     printf("Invalid Input\n");
     return EXIT_FAILURE;
    }

    int iMeter = 0;

    iMeter = iNo * KM_To_Meter;

    return iMeter;
}

int main()
{   
    int iValue = 0 , iRet = 0;

    printf("Enter the Distance\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Meter value is : %d \n",iRet);

    return EXIT_SUCCESS;
}