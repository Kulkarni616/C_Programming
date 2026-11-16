#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Input         : Integer, Integer
// Output        : Void
// Description   : Prints a grid pattern where odd rows print 
//                 lowercase alphabets and even rows print numbers
// Date          : 17/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

void Pattern( int iRows , int iCol)
{
    int i, j,iNo;

    char ch = '\0';

    for ( i = 1 ; i<= iRows ; i++)
    {
        for( j=1 ,iNo = 1, ch = 'a' ; j<= iCol ; j++,iNo++,ch++)
        {
            if((i%2) != 0)
            {
                printf("%c\t",ch);

            }
            else
            {
                printf("%d\t",iNo);
            }
        }
        printf("\n");
    }


}

int main()
{   
    int iValue1 = 0,iValue2 = 0;

    printf("Enter the Rows and Columns:\n");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}