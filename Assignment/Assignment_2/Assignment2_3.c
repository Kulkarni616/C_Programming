#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : Integer 
// Output        : None
// Description   : Displays "Hello" if the Number Is Less
//                 Than 10; Otherwise, Displays "Demo"
// Date          : 22/10/2026
// Author        : Snehal Sunil Kulkarni 
//
//////////////////////////////////////////////////////////

void Display( int iNo1)
{
    if(iNo1 < 10)
    {
      printf("Hello\n");
    }
    else
    {
      printf("Demo\n");
    }
  
}

int main()
{
    int iValue = 0;
    
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return EXIT_SUCCESS;
}