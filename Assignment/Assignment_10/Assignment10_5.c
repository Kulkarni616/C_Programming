#include <stdio.h>
#include <stdlib.h>

double SquareMeter ( float fValue)
{
    if( fValue < 0.0 )
    {
        printf("Invalid input\n");
        return fValue;
    }

    double dSqmeter = 0.0;

    dSqmeter = fValue * 0.0929;

    return dSqmeter;
}

int main()
{   
    float fValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter Area in Square feet\n");
    scanf("%f",&fValue);

    dRet = SquareMeter(fValue);

    printf("Area in Square Meter is : %f\n",dRet);

    return EXIT_SUCCESS;
}