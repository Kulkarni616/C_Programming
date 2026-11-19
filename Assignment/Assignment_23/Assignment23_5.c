#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : CountWhite
// Input         : Character Pointer (String)
// Output        : Integer (count of white spaces)
// Description   : Counts and returns the total number of
//                 space characters (' ') present in the
//                 given string
// Date          : 20/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

int CountWhite(char *Str)
{  
    
    int iCount = 0;

    while( *Str != '\0')
    {
        if( (*Str == ' '))
        {
          iCount++;
        }
        Str++;
        
    }
    return iCount;
   
}

int main()
{   
    char arr[20];
    int iRet = 0;

    printf("Enter the String:\n");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("%d\n",iRet);
    
    return EXIT_SUCCESS;
}