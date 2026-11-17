#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Input         : Integer, Integer
// Output        : Void
// Description   : Prints alphabets starting from A, where
//                 each row contains the same alphabet and
//                 the alphabet increments after every row,
//                 based on the given Rows and Columns.
// Date          : 17/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

void Pattern( int iRows, int iCol)
{   
    int i , j;
    char ch = 'A' ;
    for(i = 1 ; i <= iRows ; i++)
    {
        for( j = 1 ; j<= iCol ; j++)
            {   
               printf("%c\t",ch);
            }
            ch++;
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