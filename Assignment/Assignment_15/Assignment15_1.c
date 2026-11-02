#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : main
// Input         : String
// Output        : Integer
// Description   : Accepts and Displays the Full Name
//                 Entered by the User
// Date          : 04/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

int main()
{   
    char Name[30];

    printf("Enter The Full Name:\n");
    scanf("%[^'\n']s",Name);

    printf("Your name is : %s\n",Name);

    return EXIT_SUCCESS;
}