#include <stdio.h>
#include <stdlib.h>

double FhtoCs( float fTemp)
{   
    if(fTemp < 0.0f )
    {
      printf("Invalid Input\n");
      return fTemp;

    }

    float fCelcius = 0.0f;

    fCelcius = ((fTemp-32)*(float)5/9);

    return fCelcius;
  
   
}

int main()
{   
    float fValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter the temperature in Fahrenheit\n");
    scanf("%f",&fValue);

    dRet = FhtoCs (fValue);

    printf("Temperature in celcius is : %f\n",dRet);

    return EXIT_SUCCESS;
}