#include <stdio.h>
#include <stdlib.h>


void MultipleDisplay( int iNo)
{
  int iCnt = 0;
  int iAns = 0;

  if(iNo < 0)
  {
    printf("Invalid Input\n");
    return;
  }

  for(iCnt = 1; iCnt <= 5 ; iCnt++)
  {
   iAns = iNo * iCnt;
   printf("%d\t",iAns);
  }
  printf("\n");
  
}

int main()
{  
   int iValue = 0;

   printf("Enter the number:\n");
   scanf("%d",&iValue);

   MultipleDisplay(iValue);

   return EXIT_SUCCESS; 

}