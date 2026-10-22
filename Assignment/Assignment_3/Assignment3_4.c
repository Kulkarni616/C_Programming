#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


///////////////////////////////////////////////////////////////////
//
// Function Name : DisplayConvert
// Input         : Character
// Output        : None
// Description   : Converts Uppercase to Lowercase and
//                 Lowercase to Uppercase
// Date          : 22/10/2026
// Author        : Snehal Sunil Kulkarni 
//
///////////////////////////////////////////////////////////////////

void DisplayConvert( char CValue)
{
  
    if(((CValue >= 'A') && (CValue <= 'Z')))
    { 
        CValue = CValue + 32;
        printf("%c\n",CValue);
    }
    else if(((CValue >= 'a') && (CValue <= 'z')))
    {
        CValue = CValue - 32;
        printf("%c\n",CValue);

    }

}
   
int main()
{
    char cValue = '\0';
    
    printf("Enter character: \n");
    scanf(" %c",&cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}