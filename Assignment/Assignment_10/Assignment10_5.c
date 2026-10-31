#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : SquareMeter
// Input         : Float
// Output        : Double
// Description   : Converts the Given Area from Square
//                 Feet to Square Metres
// Date          : 02/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

#define FEET_TO_METER  0.0929

double SquareMeter ( float fValue)
{
    if( fValue < 0.0 )
    {
        printf("Invalid input\n");
        return EXIT_FAILURE;
    }

    double dSqmeter = 0.0;

    dSqmeter = fValue * FEET_TO_METER;

    return dSqmeter;
}

int main()
{   
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Area in Square feet\n");
    scanf("%f",&fValue);

    dRet = SquareMeter(fValue);

    printf("Area in Square Meter is : %f\n",dRet);

    return EXIT_SUCCESS;
}