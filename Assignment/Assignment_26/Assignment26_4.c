#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////
//
// Function Name : ChkSpecial
// Input         : Character (char)
// Output        : BOOL
// Description   : Checks whether the given character is a 
//                 special symbol (!, @, #, $, %, ^, &, *) or not.
// Date          : 20/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

#define TRUE  1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    
    if (ch == '!' || ch == '@' || ch == '#' || ch == '$' || 
        ch == '%' || ch == '^' || ch == '&' || ch == '*')
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character: ");
    scanf("%c", &cValue); 

    bRet = ChkSpecial(cValue);

    if (bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return EXIT_SUCCESS;
}