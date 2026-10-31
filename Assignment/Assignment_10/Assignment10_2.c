#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : RectArea
// Input         : Float, Float
// Output        : Double
// Description   : Calculates and Returns the Area of a
//                 Rectangle
// Date          : 02/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

double RectArea( float fWidth , float fHeight)
{
    if((fWidth < 0.0f) || (fHeight < 0.0f))
    {
        printf("Invalid Input\n");
        return EXIT_FAILURE;
    }

    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
    
}

int main()
{   
    float fValue1 = 0.0f,fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width\n");
    scanf("%f",&fValue1);

    printf("Enter height\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1 , fValue2);

    printf("Area of Rectangle is : %f \n",dRet);

    return EXIT_SUCCESS;
}