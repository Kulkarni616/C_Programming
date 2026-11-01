#include <stdio.h>
#include <stdlib.h>


void RangeDisplay(int iStart , int iEnd)
{
    int iCnt = 0;


    if( iStart > iEnd)
    {
        printf("Invalid Range\n");
        return;
    }

    for( iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
      printf("%d\t",iCnt);

    }
    printf("\n");


}

int main()
{   
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter Starting point:\n ");
    scanf("%d",&iValue1);

    printf("Enter ending point:\n ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return EXIT_SUCCESS;
}