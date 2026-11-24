/*

   ------------------------------------------
             Operation ||
   ------------------------------------------
   Result1       Result1        Final Result
   ------------------------------------------
    TRUE        TRUE             TRUE         //Short circuit
    TRUE        FALSE            TRUE         //Short circuit
    FALSE       TRUE             TRUE
    FALSE       FALSE            FALSE
  ------------------------------------------

*/


#include <stdio.h>
#include <stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo % 5 == 0) || (iNo % 3 == 0))
    {
        printf("Number is divisible ...\n ");

    }
    else
    {
        printf("Number Not is divisible ...\n ");
    }

}


int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);


    return EXIT_SUCCESS;
}