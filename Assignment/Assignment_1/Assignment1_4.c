#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int BOOL;

#define TRUE  1
#define fALSE 0

bool CheckDivision( int iNo1)
{

  if(iNo1 % 5 == 0)
  {
     return TRUE;
  }
  else
  {
     return fALSE;
  }

}

int main()
{
    int iValue = 0;
    BOOL bRet = fALSE;
    
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckDivision(iValue);

    if( bRet == TRUE)
    {
      printf("Number is divisible by 5\n");
    }
    else
    {
      printf("Number is not divisible by 5\n");
    }
    
    return EXIT_SUCCESS;
}