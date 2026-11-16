#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Input         : Integer, Integer
// Output        : Void
// Description   : Prints a grid where numbers continuously 
//                 increase across rows and columns
// Date          : 17/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

void Pattern( int iRows , int iCol)
{
    int i, j,iNo , iAns;

    iNo = 1;

    for ( i = 1; i<= iRows ; i++)
    {
        for( j= 1 ; j<= iCol; j++)
        {
            iAns = ((i + j)-1);
            printf("%d\t",iAns); 
           
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