#include <stdio.h>
#include <stdlib.h>


////////////////////////////////////////////////////////
//
// Function Name : Display 
// Input         : None
// Output        : None
// Description   : Performs Display 5 times Marvellous 
// Date          : 22/10/2026
// Author        : Snehal Sunil Kulkarni 
//
////////////////////////////////////////////////////////

void Display()
{
    int iCnt = 0;

    for( iCnt = 1 ; iCnt <= 5 ; iCnt++)
    {
      printf("Marvellous\n");
    }

}

int main()
{
    Display();
    
    return EXIT_SUCCESS;
}