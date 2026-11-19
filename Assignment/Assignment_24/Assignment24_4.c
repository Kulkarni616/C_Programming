#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : LastChar
// Input         : Character Pointer (String), Character
// Output        : Integer (index of last occurrence or -1)
// Description   : Finds and returns the index position of
//                 the last occurrence of the given
//                 character in the string; returns -1 if
//                 not found
// Date          : 20/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

int LastChar( char *Str, char ch)
{ 

    int iCount = 0;
    int last = -1;            

    while (*Str != '\0')
    {
        if (*Str == ch)
            last = iCount;     

        iCount++;
        Str++;
    }
    return last; 
    

}

int main()
{   
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter the String:\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the Character:\n");
    scanf(" %c",&cValue);

    iRet = LastChar(arr,cValue);

    printf("Charecter location is :%d\n",iRet);

    return EXIT_SUCCESS;
}