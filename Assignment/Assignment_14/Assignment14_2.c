#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : FactRev
// Input         : Integer
// Output        : None
// Description   : Displays All Factors of the Given Number
//                 in Reverse Order
// Date          : 04/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

void FactRev( int iNo )
{
    int iCnt = 0;

    if(iNo < 0)
    {
        printf("Invalid Input\n");
        return ;
    }

    for( iCnt = (iNo/2) ; iCnt >= 1; iCnt--)
    {
       if((iNo % iCnt) == 0)
        {
         printf("%d\t",iCnt);
        }

    }
    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}