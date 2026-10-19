#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

bool ChkEven( int iNo1)
{

  if(iNo1 % 2 == 0)
  {
     return TRUE;
  }
  else
  {
     return FALSE;
  }

}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if( bRet == TRUE)
    {
      printf("Number is Even\n");
    }
    else
    {
      printf("Number is Odd\n");
    }
    
    return EXIT_SUCCESS;
}