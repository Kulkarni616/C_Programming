#include <stdio.h>
#include <stdlib.h>

int Multiplay( int iNo1 , int iNo2 , int iNo3)
{
    int iMult = 0;

    if(iNo1 == 0)
    {
       iNo1 = 1;
    }
    
    if (iNo2 == 0)
    {
        iNo2 = 1;
    }
    
    if (iNo3 == 0)
    {
        iNo3 = 1;
    }
   

    iMult  = iNo1 * iNo2 * iNo3;
    
    return iMult;

}

int main()
{
    int iValue1 = 0 , iValue2 = 0 , iValue3 = 0 , iRet = 0;

    printf("Enter the three number:\n");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    iRet = Multiplay(iValue1,iValue2,iValue3);

    printf("Multiplication is : %d\n",iRet);

    return EXIT_SUCCESS;
}