#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : RangeDisplayRev
// Input         : Integer, Integer
// Output        : void
// Description   : Displays All Numbers Between the Given
//                 Starting and Ending Points in Reverse
//                 Order
// Date          : 04/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////


void RangeDisplayRev(int iStart , int iEnd)
{
    int iCnt = 0;


    if( iStart > iEnd)
    {
        printf("Invalid Range\n");
        return;
    }

    for( iCnt = iEnd ; iCnt >= iStart ; iCnt--)
    {
      printf("%d\t",iCnt);

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

    RangeDisplayRev(iValue1,iValue2);

    return EXIT_SUCCESS;
}