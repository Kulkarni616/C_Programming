#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////
//
// Function Name : DisplaySchedule
// Input         : Character (char)
// Output        : BOOL
// Description   : Accepts a division (case insensitive) and 
//                 displays the respective exam timing. Returns 
//                 TRUE if valid, FALSE otherwise.
// Date          : 20/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("Your exam at 7 AM\n");
        return TRUE;
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Your exam at 8.30 AM\n");
        return TRUE;
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam at 9.20 AM\n");
        return TRUE;
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your exam at 10.30 AM\n");
        return TRUE;
    }
    else
    {
        printf("Invalid Division\n");
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter your division: ");
    scanf(" %c", &cValue);

    bRet = DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}