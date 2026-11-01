#include <stdio.h>
#include <stdlib.h>

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