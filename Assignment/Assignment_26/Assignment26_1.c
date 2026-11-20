#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : DisplayASCII
// Input         : None
// Output        : Void
// Description   : Displays the ASCII values from 0 to 255
//                 in Decimal, Hexadecimal, and Octal formats.
// Date          : 20/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

void DisplayASCII()
{
  
    int iCnt = 0;
    printf("---------------------------\n");
    printf("Deci  Hexdeci  Octal\n");
    printf("---------------------------\n");

    for(iCnt= 0 ; iCnt <= 255 ; iCnt++)
    {
        
        printf("%d       %X        %o\n",iCnt,iCnt,iCnt);
       
    }

}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}