#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Input         : Integer, Integer
// Output        : Void
// Description   : Prints uppercase alphabets in odd rows
//                 and lowercase alphabets in even rows,
//                 based on the given Rows and Columns.
// Date          : 17/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

void Pattern( int iRows, int iCol)
{   
    int i , j;
    char ch ,ch1;
    for(i = 1 ; i <= iRows ; i++)
    {
        for( j = 1,ch = 'A' ; j<= iCol ; j++,ch++)
            {   
                if( i % 2 == 0)
                {
                  ch1 = ch + 32;  
                  printf("%c\t",ch1);
                }
                else
                {
                  printf("%c\t",ch);
                }
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