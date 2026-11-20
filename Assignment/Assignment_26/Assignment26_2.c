#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : Character (char)
// Output        : Void
// Description   : Accepts a character and toggles its case. 
//                 If uppercase, converts to lowercase; if 
//                 lowercase, converts to uppercase, and displays it.
// Date          : 20/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////  

void Display( char ch)
{
  
    if(ch >= 'A' && ch <= 'Z')
    {
      ch = ch +32;  
      printf("%c\n",ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
      ch = ch - 32;  
      printf("%c\n",ch);
    }
    else
    {
      printf("%c\n",ch);
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