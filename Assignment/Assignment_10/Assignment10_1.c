#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : CircleArea
// Input         : Float
// Output        : Double
// Description   : Calculates and Returns the Area of a
//                 Circle
// Date          : 02/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

#define PI 3.14

double CircleArea( float fRadius)
{
    if(fRadius <= 0.0f)
    {
        printf("Invalid Input\n");
        return EXIT_FAILURE;
    }

    double dArea = 0.0;

    dArea = PI * (fRadius * fRadius);

    return dArea;


}

int main()
{   
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %f\n",dRet);

    return EXIT_SUCCESS;
}