#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Display( int iNo1)
{
  int iCnt = 0;
  
  iCnt = 1 ;

  if(iNo1 < 0)
  {
    iNo1 =- iNo1;
  }

  while (iNo1 >= iCnt)
  {
    printf("*");
    iNo1--;
  }
  printf("\n");
   
}

int main()
{
    int iValue = 0;
    
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return EXIT_SUCCESS;
}