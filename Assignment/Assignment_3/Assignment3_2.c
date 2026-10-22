#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


////////////////////////////////////////////////////////
//
// Function Name : DisplayFactor
// Input         : Integer 
// Output        : None
// Description   : Displays All Factors of a Given Number
//                 Except the Number Itself
// Date          : 22/10/2026
// Author        : Snehal Sunil Kulkarni 
//
////////////////////////////////////////////////////////

void DisplayFactor( int iNo)
{
    int iCnt = 0;
  
    if(iNo < 0)
    {
        iNo =- iNo;
    }

    for(iCnt =1 ; iCnt<= iNo/2; iCnt++)
    {
         if(iNo % iCnt == 0)
            {
                 printf("%d ",iCnt);
            }
    }
    printf("\n");

 }
   
int main()
{
    int iValue = 0;
    
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return EXIT_SUCCESS;
}