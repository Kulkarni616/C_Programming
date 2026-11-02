#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : NonFact
// Input         : Integer
// Output        : void
// Description   : Displays All Non-Factors of the Given
//                 Number
// Date          : 04/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

void NonFact( int iNo )
{
    int iCnt = 0;

    for( iCnt = 1; iCnt <= iNo ; iCnt++)
    {
       if((iNo % iCnt) != 0)
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

    NonFact(iValue);

    return EXIT_SUCCESS;
}