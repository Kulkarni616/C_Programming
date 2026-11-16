#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Input         : Integer, Integer
// Output        : Void
// Description   : Prints a grid pattern where odd rows print 
//                 even numbers and even rows print odd numbers
// Date          : 17/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

void Pattern( int iRows , int iCol)
{
    int i, j,iNo;

    for ( i = 1 ; i<= iRows ; i++)
    {
        for( j=1 , iNo = 1 ; j<= iCol ; j++,iNo++)
        {
            if((i%2) != 0)
            {
                if((iNo % 2)==0)
                printf("%d\t",iNo);

            }
            else
            {
                if((iNo % 2) !=0)
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