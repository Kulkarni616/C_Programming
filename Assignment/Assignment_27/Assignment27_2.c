#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : CountSmall
// Input         : Character Pointer (String)
// Output        : Integer (int)
// Description   : Counts and returns the total number of 
//                 small characters (a-z) in the given string.
// Date          : 20/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        
        str++;
    }

    return iCnt; 
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the string: ");
    scanf("%[^'\n']s", arr);

    iRet = CountSmall(arr);

    printf("Output: %d\n", iRet);

    return EXIT_SUCCESS;
}