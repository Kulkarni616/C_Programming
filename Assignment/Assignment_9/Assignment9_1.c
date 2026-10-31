#include <stdio.h>
#include <stdlib.h>

void Display( int iNo)
{
    int iCnt = 0;
    int icount = 0; 

    if(iNo < 0)
    {
        iNo =- iNo;
    }

    for(iCnt = 1; iCnt <= iNo * 2; iCnt++)
    {
       if(iCnt <= iNo)
        {
            printf("*\t");
        }
        else
        {
            printf("#\t");
        }
    }
    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}