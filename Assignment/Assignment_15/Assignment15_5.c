#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name : Percentage
// Input         : Integer, Integer
// Output        : Float
// Description   : Calculates and Returns the Percentage
//                 Based on Total Marks and Obtained Marks
// Date          : 04/11/2026
// Author        : Snehal Sunil Kulkarni
//
///////////////////////////////////////////////////////////

float Percentage( int iTotal , int iObtain)
{
    float fPer = 0.0f;

    fPer = (((float)iObtain/iTotal)*100) ;

    return fPer;

}

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter total marks:\n");
    scanf("%d",&iValue1);

    printf("Enter Obtained marks:\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentage is : %.2f\n",fRet);

    return EXIT_SUCCESS;
}