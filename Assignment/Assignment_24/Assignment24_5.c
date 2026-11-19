#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : StrRevx
// Input         : Character Pointer (String)
// Output        : Void
// Description   : Reverses the given string in place
//                 using two pointers (Start and End) that
//                 swap characters while moving inward
// Date          : 20/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

void StrRevx( char *Str)
{ 

    char *Start = Str;          
    char *End = Str;            
    char temp;

    
    while (*End != '\0')
        End++;

    End--;                     


    while (Start < End)
    {
        temp = *Start;
        *Start = *End;
        *End = temp;

        Start++;                
        End--;                 
    }
    

}

int main()
{   
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter the String:\n");
    scanf("%[^'\n']s",arr);

    StrRevx(arr);

    printf("Modifided String is :%s\n",arr);

    return EXIT_SUCCESS;
}