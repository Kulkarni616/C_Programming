#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : FhtoCs
// Input         : Float
// Output        : Double
// Description   : Converts the Given Temperature from
//                 Fahrenheit to Celsius
// Date          : 02/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

double FhtoCs( float fTemp)
{   
   
    float fCelcius = 0.0f;

    fCelcius = ((fTemp-32)*((float)5/9));

    return fCelcius;
  
   
}

int main()
{   
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the temperature in Fahrenheit\n");
    scanf("%f",&fValue);

    dRet = FhtoCs (fValue);

    printf("Temperature in celcius is : %f\n",dRet);

    return EXIT_SUCCESS;
}