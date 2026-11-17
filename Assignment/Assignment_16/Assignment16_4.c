#include <stdio.h>
#include <stdlib.h>

void Pattern( int iRows, int iCol)
{   
    int i , j ,iNo;
    iNo = 4;
    for(i = 1 ; i <= iRows ; i++)
    {    
        for( j = 1; j<= iCol ; j++)
            {   
               printf("%d\t",iNo);
            }
            printf("\n");
            iNo--;
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