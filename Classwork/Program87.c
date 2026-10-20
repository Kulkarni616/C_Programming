#include <stdio.h>
#include <stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo % 5 == 0))
    {  
        if( (iNo % 3 == 0))
        {
            printf("Number is divisible ...\n ");
        }
        else
        {
            printf("Number Not divisible ...\n ");
        }
        

    }
    else 
    {
        printf("Number Not divisible ...\n ");
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