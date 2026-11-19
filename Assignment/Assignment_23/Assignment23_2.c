#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : Struprx
// Input         : Character Pointer (String)
// Output        : Void
// Description   : Converts all lowercase letters (a-z) in the
//                 string to uppercase (A-Z) in place
// Date          : 20/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

void Struprx(char *Str)
{  

    while( *Str != '\0')
    {
        if( (*Str >= 'a') && (*Str <= 'z'))
        {
          *Str -= 32;
        }
        Str++;
    }
   
}

int main()
{   
    char arr[20];

    printf("Enter the String:\n");
    scanf("%[^'\n']s",arr);

    Struprx(arr);

    printf("modified String is : %s\n",arr);

    return EXIT_SUCCESS;
}