#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Input         : Integer
// Output        : Void
// Description   : Prints an increasing alphabet pattern
//                 starting from 'A' up to the specified
//                 number of elements
// Date          : 18/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

void Pattern( int iNo)
{
    int iCnt = 0;
    char ch = '\0';
    ch = 'A';

    for( iCnt =1 ; iCnt <= iNo ;iCnt++)
    {
        printf("%c\t",ch);
        ch++;
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