#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : CountChar
// Input         : Character Pointer (String), Character
// Output        : Integer (frequency count)
// Description   : Counts and returns the total number of
//                 times the given character appears in the
//                 string
// Date          : 20/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

int CountChar( char *Str, char ch)
{ 

    int iCount = 0;

    while ( *Str != '\0')
    {
        
        if( *Str == ch)
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
    char cValue;
    int iRet = 0;

    printf("Enter the String:\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the Character:\n");
    scanf(" %c",&cValue);

    iRet = CountChar(arr,cValue);

    printf("Charecter frequency is :%d\n",iRet);

    return EXIT_SUCCESS;
}