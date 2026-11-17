#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Input         : Integer, Integer
// Output        : Void
// Description   : Prints an increasing number pattern where
//                 each row starts with its row number and
//                 subsequent numbers are incremented by one.
//                 Blank spaces are printed before the numbers
//                 to create a triangular pattern
// Date          : 18/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

void Pattern( int iRows , int iCol)
{
    int i, j , iNo;

    for ( i = 1 ; i<= iRows ; i++)
    {
        for( j = 1, iNo = i ; j<= iCol ; j++)
        {
            if( i > j)
            {
                printf("\t");
            }
            else
            {
                printf("%d\t",iNo);
                iNo++;
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