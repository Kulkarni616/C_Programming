#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Input         : Integer, Integer
// Output        : Void
// Description   : Prints numbers starting from 1 in a
//                 continuous sequence across rows and
//                 columns based on the given Rows and
//                 Columns.
// Date          : 17/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

void Pattern( int iRows, int iCol)
{   
    int i , j ,iNo;
    iNo = 1;
    for(i = 1 ; i <= iRows ; i++)
    {    
        for( j = 1 ; j<= iCol ; j++)
            {   
               printf("%d\t",iNo);
               iNo++; 
            }
            printf("\n");
    }
   
}


int main() 
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows and columns :\n");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}