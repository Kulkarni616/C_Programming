#include <stdio.h>
#include <stdlib.h>

void DisplayPattern( int iNo)
{

   int iCnt = 0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
      printf("*\t");

    }
    printf("\n");


}

int main()
{   
    int iValue = 0;

    printf("Enter the frequency :\n");
    scanf("%d",&iValue);
   
    DisplayPattern(iValue);


    return EXIT_SUCCESS;
}