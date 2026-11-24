/*
   Input : 4

   Output: 0  1  2  3  4 

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
   
    for(iCnt = 0 ; iCnt <= iNo ; iCnt++)
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