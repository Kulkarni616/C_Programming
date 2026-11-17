#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Input         : Integer
// Output        : Void
// Description   : Prints numbers in decreasing order
//                 starting from the given number, with
//                 a '#' symbol after each number
// Date          : 18/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

void Pattern( int iNo)
{
    int iCnt = 0;

    for( iCnt =iNo ; iCnt >= 1 ;iCnt--)
    {
        printf("%d\t#\t",iNo);
        iNo--;
        
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