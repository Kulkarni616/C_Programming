/*
   Input : 4

   Output: 4 3 2 1 0

*/


#include <stdio.h>
#include <stdlib.h>

void Pattern( int iNo)
{
    int iCnt = 0;

    if( iNo < 0)
    {
      iNo =- iNo;
    }
   
    for(iCnt = iNo ; iCnt >= 0 ; iCnt--)
    {
       printf("%d\t",iCnt);

    }
    printf("\n");
    
   

}

int main()
{   
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);
   
    Pattern(iValue);
    
    return EXIT_SUCCESS;
}