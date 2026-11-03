#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : RangeDisplayEven
// Input         : Integer, Integer
// Output        : None
// Description   : Displays All Even Numbers Between the
//                 Given Starting and Ending Points
// Date          : 04/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////


void RangeDisplayEven(int iStart , int iEnd)
{
    int iCnt = 0;
    

    if( iStart > iEnd)
    {
        printf("Invalid Range\n");
        return;
    }

    for( iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
      if( ((iCnt % 2) == 0))
      {
        printf("%d\t",iCnt);
      }

    }
    printf("\n");


}

int main()
{   
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter Starting point:\n ");
    scanf("%d",&iValue1);

    printf("Enter ending point:\n ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return EXIT_SUCCESS;
}