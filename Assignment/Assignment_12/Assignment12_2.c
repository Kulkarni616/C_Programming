#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TRUE  0
#define FALSE 1

typedef int BOOL;

BOOL ChkZero( int iNo)
{   
    int iDigits = 0;

    while( iNo != 0)
    { 
       iDigits = iNo % 10 ;

       if( iDigits == 0)
       {
          return TRUE;
       }
       
       iNo = iNo /10;
    }

    return FALSE;


}

int main()
{  
    int iValue = 0;
    BOOL bRet = false;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contais Zero\n");
    }
    else
    {
        printf("There Is No Zero\n");
    }

    return EXIT_SUCCESS;
}