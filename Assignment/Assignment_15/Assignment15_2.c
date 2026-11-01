#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;

#define TRUE  0
#define FALSE 1

BOOL ChkGreater( int iNo)
{
   if( iNo > 100)
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

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE)
    {
      printf("Greater\n");
    }
    else
    {
      printf("Small\n");
    }


    return EXIT_SUCCESS;
}