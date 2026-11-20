#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : Character (char)
// Output        : Void
// Description   : Accepts a character and displays its ASCII 
//                 value in Decimal, Octal, and Hexadecimal formats.
// Date          : 20/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////


void Display(char ch)
{
    printf("Decimal\t\t%d\n", ch);
    
    printf("Octal\t\t0%o\n", ch);
    
    printf("Hexadecimal\t0X%X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}