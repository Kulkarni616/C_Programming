/*
   Input : 4

   Output: -4 -3 -2 -1 -0  1  2  3  4

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
   
    for(iCnt = -iNo ; iCnt <= iNo; iCnt++)  //O(2N)
    {
       printf("%d\t",iCnt);

    }
    printf("\n");
    
   //Time Complexity : O(2N)

}

int main()
{   
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);
   
    Pattern(iValue);
    
    return EXIT_SUCCESS;
}