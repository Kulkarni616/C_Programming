#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////
//
// Function Name : ChkVowel
// Input         : Character Pointer (String)
// Output        : BOOL
// Description   : Checks whether the given string contains any 
//                 vowels (case insensitive) or not. Returns TRUE 
//                 if found, otherwise FALSE.
// Date          : 20/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

#define TRUE  1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
           *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            return TRUE; 
        }
        str++; 
    }

    return FALSE; 
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter the string: ");
    scanf("%[^'\n']s", arr);

    bRet = ChkVowel(arr);

    if (bRet == TRUE)
    {
        printf("Contains vowels\n");
    }
    else
    {
        printf("There is no vowels\n");
    }

    return EXIT_SUCCESS;
}