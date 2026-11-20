#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : Character (char)
// Output        : Void
// Description   : If input is capital, displays all characters 
//                 from input till 'Z'. If small, displays in 
//                 reverse order till 'a'.
// Date          : 20/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

void Display(char ch)
{
    char ch1; 

    if(ch >= 'A' && ch <= 'Z')
    {
        for(ch1 = ch; ch1 <= 'Z'; ch1++)
        {
            printf("%c\t", ch1);
        }
        printf("\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        for(ch1 = ch; ch1 >= 'a'; ch1--) 
        {
            printf("%c\t", ch1);
        }
        printf("\n");
    }
    
}

int main()
{   
    char cValue = '\0';

    printf("Enter the Character:\n");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}