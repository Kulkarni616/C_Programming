#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Accept( int iNo1)
{
  int iCnt = 0;

  for(iCnt = 1 ; iCnt<= iNo1 ;iCnt++)
  {
    printf("*");
  }
  printf("\n");
  
}

int main()
{
    int iValue = 0;
    
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Accept(iValue);
    
    return EXIT_SUCCESS;
}