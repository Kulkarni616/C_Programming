#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////

//
// Function Name : Display
// Input         : Integer 
// Output        : None
// Description   : Performs Display * On Screen
// Date          : 22/10/2026
// Author        : Snehal Sunil Kulkarni 
//
////////////////////////////////////////////////////////////



void Display( int iNo1)
{
    int iCnt = 0;
  
    iCnt = 1 ;

    //updater
    if(iNo1 < 0)
    {
      iNo1 =- iNo1;
    }

    while (iCnt <= iNo1)
    {
      printf("*");
      iCnt++;
    }
    printf("\n");
   
}

int main()
{
    int iValue = 0;
    
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return EXIT_SUCCESS;
}