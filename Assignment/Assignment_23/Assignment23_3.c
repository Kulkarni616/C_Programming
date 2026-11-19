#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
// Function Name : Strtogglex
// Input         : Character Pointer (String)
// Output        : Void
// Description   : Toggles the case of every letter in the
//                 string - uppercase becomes lowercase and
//                 lowercase becomes uppercase
// Date          : 20/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

void Strtogglex(char *Str)
{  

    while( *Str != '\0')
    {
        if((*Str >= 'a') && (*Str <= 'z'))
        {
          *Str -= 32;
        }
        else if ((*Str >= 'A') && (*Str <= 'Z'))
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

    Strtogglex(arr);

    printf("modified String is : %s\n",arr);

    return EXIT_SUCCESS;
}