#include <stdio.h>
#include <stdlib.h>

void Display( int iNo1 , int frequency)
{
   int iCnt = 0;
   
   //updater
   if(frequency < 0)
   {
      frequency =- frequency; 
   }

   for(iCnt = 1 ; iCnt<= frequency; iCnt++)
   {
    printf("%d ",iNo1);
   }
   printf("\n");

}

int main()
{
    int iValue = 0 , iCount = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    printf("Enter the frequency :");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return EXIT_SUCCESS;
}