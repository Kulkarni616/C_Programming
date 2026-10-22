#include <stdio.h>
#include <stdlib.h>


////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : None
// Output        : None
// Description   : Performs Display Integer 5 to 1
// Date          : 22/10/2026
// Author        : Snehal Sunil Kulkarni 
//
////////////////////////////////////////////////////////

void Display()
{
    int iCnt = 0;

    iCnt = 5 ;

    while( iCnt >= 1)
    {
      printf("%d\n",iCnt);
      iCnt--;

    }

}

int main()
{
    Display();
    
    return EXIT_SUCCESS;
}