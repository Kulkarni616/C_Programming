#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : Table
// Input         : Integer
// Output        : None
// Description   : Displays the Multiplication Table of
//                 a Given Number in Reverse Order
// Date          : 02/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt = 0;
    int iAns = 0;

    if(iNo < 0)
    {
        iNo =- iNo;
    }
    
    for( iCnt = 10 ; iCnt >= 1 ; iCnt--)
    {
        iAns = iNo * iCnt;
        printf("%d\t",iAns);
    }
    printf("\n");
    


}

int main()
{   
    int ivalue = 0;

    printf("Enter the Number\n");
    scanf("%d",&ivalue);

    Table(ivalue);

    return EXIT_SUCCESS;
}