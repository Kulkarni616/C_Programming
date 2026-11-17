#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Input         : Integer, Integer
// Output        : Void
// Description   : Prints a rectangular number pattern where
//                 each row contains the same number repeated
//                 across all columns, starting from 1 and
//                 incrementing by 1 for each subsequent row
// Date          : 18/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////


void Pattern( int iRows , int iCol)
{
    int i, j , iNo;
    
   for ( i = 1 , iNo = 1 ; i<= iRows ; i++ ,iNo++ )
    {
        for( j = 1; j<= iCol ; j++)
        {
            printf("%d\t",iNo);
           
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