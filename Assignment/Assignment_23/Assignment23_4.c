#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : DisplayDigit
// Input         : Character Pointer (String)
// Output        : Void
// Description   : Displays only the digit characters (0-9)
//                 present in the string; other characters
//                 are skipped
// Date          : 20/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

void DisplayDigit(char *Str)
{  

    while( *Str != '\0')
    {
        if( (*Str >= '0') && (*Str <= '9'))
        {
          printf("%c", *Str);
        }
        Str++;
        
    }
    printf("\n");
   
}

int main()
{   
    char arr[20];

    printf("Enter the String:\n");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);
    
    return EXIT_SUCCESS;
}