#include <stdio.h>
#include <stdlib.h>


/////////////////////////////////////////////////////////////
//
// Function Name : FindGreater
// Input         : Integer , Integer
// Output        : None
// Description   : Finds the Greater Number Between Two
//                 Integers or Checks Whether They Are Equal
// Date          : 22/10/2026
// Author        : Snehal Sunil Kulkarni 
//
/////////////////////////////////////////////////////////////

void FindGreater( int iFirst , int iSeconds)
{
     if(iFirst > iSeconds)
     {
        printf("Greater number is : %d\n",iFirst);
     }
     else if (iSeconds > iFirst)
     {
        printf("Greater number is : %d\n",iSeconds);
     }
     else if (iFirst == iSeconds)
     {
        printf("Both number is equal :%d %d\n", iFirst, iSeconds);

     }
}

int main() 
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter two number : \n");
    scanf("%d %d",&iValue1,&iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}