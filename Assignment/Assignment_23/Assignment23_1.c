#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : StrlWrx
// Input         : Character Pointer (String)
// Output        : Void
// Description   : Converts all uppercase letters (A-Z) in the
//                 string to lowercase (a-z) in place
// Date          : 20/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

void StrlWrx(char *Str)
{  

    while( *Str != '\0')
    {
        if((*Str >= 'A') && (*Str <= 'Z'))
        {
          *Str += 32;
        }
        Str++;
    }
   
}

int main()
{   
    char arr[20];

    printf("Enter the String:\n");
    scanf("%[^'\n']s",arr);

    StrlWrx(arr);

    printf("modified String is : %s\n",arr);

    return EXIT_SUCCESS;
}