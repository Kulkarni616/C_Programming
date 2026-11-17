#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Input         : Integer, Integer
// Output        : Void
// Description   : Prints a lower triangular pattern using
//                 '*' symbols based on row and column numbers
// Date          : 18/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

void Pattern( int iRows , int iCol)
{
    int i, j;

    for ( i = 1; i<= iRows ; i++)
    {
        for( j=1 ; j<= iCol ; j++)
        {
            
            if( i >= j)
            {   
                printf("*\t");
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