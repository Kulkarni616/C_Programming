#include <stdio.h>
#include <stdlib.h>

void Number( int iNo)
{
    if(iNo < 0)
    {
        printf("Invalid Input\n");
        return ;
    }

    if( (iNo > 0 ) && (iNo < 50))
    {
        printf("Number is Less\n");
    }
    else if ( (iNo >= 50) && (iNo <= 100))
    {
        printf("Number is Medium\n");
    }
    else
    {
        printf("Number is Large\n");
    }
   
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}