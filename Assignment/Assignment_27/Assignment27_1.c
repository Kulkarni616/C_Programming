#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : CountCapital
// Input         : Character Pointer (String)
// Output        : Integer (int)
// Description   : Counts and returns the total number of 
//                 capital characters (A-Z) in the given string.
// Date          : 20/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
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

    iRet = CountCapital(arr);

    printf("Output: %d\n", iRet);

    return EXIT_SUCCESS;
}