#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Input         : Integer
// Output        : Void
// Description   : Prints even numbers in increasing order
//                 starting from 2 up to twice the given
//                 number of elements
// Date          : 18/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

void Pattern( int iNo)
{
    int iCnt = 0;

    for( iCnt = 1 ; iCnt <= iNo * 2 ;iCnt++)
    {   
        if((iCnt % 2) == 0)
        {
            printf("%d\t",iCnt);
        }
        
    }
    printf("\n");

}

int main()
{   
    int iValue1 = 0;

    printf("Enter the Number of elements:\n");
    scanf("%d",&iValue1);

    Pattern(iValue1);

    return EXIT_SUCCESS;
}