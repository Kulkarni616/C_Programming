#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void DisplayEvenFactor( int iNo)
{
  int iCnt = 0;
  
    if(iNo < 0)
    {
        iNo =- iNo;
    }

    for(iCnt = 1 ; iCnt<= iNo/2; iCnt++)
    {
         if((iNo % iCnt == 0) && ( iCnt % 2 == 0))
            {
                 printf("%d ",iCnt);
            }
    }
    printf("\n");

 }
   
int main()
{
    int iValue = 0;
    
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    printf("Even Factor\n");

    return EXIT_SUCCESS;
}