#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : DollerToINR
// Input         : Integer
// Output        : Integer
// Description   : Converts the Given Amount from USD
//                 to Indian Rupees (INR)
// Date          : 02/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

int DollerToINR( int iNo)
{
    if(iNo < 0)
    {
        printf("invalid USD\n");
        return iNo;
    }
    
    int iInr = 0;
    
    iInr = iNo * 70;

    return iInr;


}

int main()
{   
    int ivalue = 0 , iRet = 0;

    printf("Enter the Nuber of USD : \n");
    scanf("%d",&ivalue);
    
    iRet = DollerToINR(ivalue);

    printf("Value in INR is %d\n",iRet);

    return EXIT_SUCCESS;
}