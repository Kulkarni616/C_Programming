#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Input         : Integer, Integer
// Output        : Void
// Description   : Prints a rectangular number pattern where
//                 numbers are displayed along the boundary
//                 and main diagonal, while blank spaces are
//                 printed in the remaining positions
// Date          : 18/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////```


void Pattern( int iRows , int iCol)
{
    int i, j , iNo;

    for ( i = 1 ; i<= iRows ; i++)
    {
        for( j = 1, iNo = 1 ; j<= iCol ; j++)
        {
                
               if( (i == 1 ) || (i == iRows) || (j == 1) || ( j == iCol) || ( i == j))
               { 
                    printf("%d\t",iNo);
                    iNo++;
               }
               else
               {
                    printf("\t");
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