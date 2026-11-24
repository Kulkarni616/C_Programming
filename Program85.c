/*

   ------------------------------------------
             Operation &&
   ------------------------------------------
   Result1       Result1        Final Result
   ------------------------------------------
    TRUE        TRUE             TRUE
    TRUE        FALSE            FALSE
    FALSE       TRUE             FALSE   //Short circuit
    FALSE       FALSE            FALSE   //Short circuit
  ------------------------------------------

*/


#include <stdio.h>
#include <stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo % 5 == 0) && (iNo % 3 == 0))
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