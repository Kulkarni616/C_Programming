#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////
//
// Function Name : ChkChar
// Input         : Character Pointer (String), Character
// Output        : BOOL (TRUE if found, FALSE otherwise)
// Description   : Checks whether the given character is
//                 present in the string or not
// Date          : 20/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

#define TRUE  1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar( char *Str, char ch)
{ 
    while ( *Str != '\0')
    {
        if( *Str == ch)
        {
            return TRUE;
        }
        Str++;
       
    }
    return FALSE;
    

}

int main()
{   
    char arr[20];
    char cValue;

    BOOL bRet = FALSE;

    printf("Enter the String:\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the Character:\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
      printf("Character found \n");
    }
    else
    {
      printf("Character not found \n");
    }

    return EXIT_SUCCESS;
}