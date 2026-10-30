#include <stdio.h>
#include <stdlib.h>

void DisplayOdd(int iNo)
{
  int iCnt = 0;

  if(iNo < 0)
  {
   printf("Invalid number\n");
   return;
  }

  for( iCnt = 1 ; iCnt <= iNo ; iCnt++)
  {
     if( ((iCnt % 2) != 0) )
     {
       printf("%d\t",iCnt);
     }

  }
  printf("\n");

}

int main()
{
   int iValue = 0;

   printf("Enter the Number : \n");
   scanf("%d",&iValue);

   DisplayOdd(iValue);

   return EXIT_SUCCESS; 

}