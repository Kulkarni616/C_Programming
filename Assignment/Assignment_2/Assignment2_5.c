#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


//////////////////////////////////////////////////////////
//
// Function Name : ChKEven
// Input         : Integer 
// Output        : BOOL(True or False)
// Description   : Checks Whether a Number Is Even or Odd
// Date          : 22/10/2026
// Author        : Snehal Sunil Kulkarni 
//
//////////////////////////////////////////////////////////

typedef int BOOL;

#define TRUE  1
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