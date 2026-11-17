#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Input         : Integer
// Output        : Void
// Description   : Prints numbers in increasing order
//                 starting from 1, with a '*' symbol
//                 after each number
// Date          : 18/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

void Pattern( int iNo)
{
    int iCnt = 0;

    for( iCnt = 1; iCnt <= iNo ;iCnt++)
    {
        printf("%d\t*\t",iCnt);
        
        
    }
    iNo++;
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