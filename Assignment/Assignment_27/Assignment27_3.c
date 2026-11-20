#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : Difference
// Input         : Character Pointer (String)
// Output        : Integer (int)
// Description   : Calculates and returns the difference between 
//                 the frequency of small characters and capital 
//                 characters (Small - Capital) in the given string.
// Date          : 20/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iSmall = 0;
    int iCapital = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }
        
        str++;
    }

    return iSmall - iCapital; 
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the string: ");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("Output: %d\n", iRet);

    return EXIT_SUCCESS;
}