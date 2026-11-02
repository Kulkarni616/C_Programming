#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : ChkGreater
// Input         : Integer
// Output        : BOOL
// Description   : Checks Whether the Given Number is
//                 Greater Than 100 or Not
// Date          : 04/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

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