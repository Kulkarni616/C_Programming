#include <stdio.h>
#include <stdlib.h>

void DisplayPattern()
{

   int iCnt = 0;

    for(iCnt = 1; iCnt<=5; iCnt++)
    {
      printf("*\t");

    }
    printf("\n");


}

int main()
{   
   
    DisplayPattern();


    return EXIT_SUCCESS;
}