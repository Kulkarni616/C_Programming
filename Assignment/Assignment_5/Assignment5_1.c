#include <stdio.h>
#include <stdlib.h>


///////////////////////////////////////////////////////////
//
// Function Name : FindGreater
// Input         : Integer ,Integer,Integer
// Output        : None
// Description   : Finds the Greatest Number Among Three
//                 Integers
// Date          : 22/10/2026
// Author        : Snehal Sunil Kulkarni 
//
///////////////////////////////////////////////////////////

void FindGreater( int iFirst , int iSeconds , int iThird)
{
     if((iFirst >= iSeconds) && (iFirst >= iThird))
     {
        printf("Greater number is : %d\n",iFirst);
     }
     else if ((iSeconds >= iFirst) && ( iSeconds >= iThird))
     {
        printf("Greater number is : %d\n",iSeconds);
     }
     else
     {
        printf("Greater number is : %d\n",iThird);
     }
     
}

int main() 
{
    int iValue1 = 0 , iValue2 = 0 , iValue3 = 0;

    printf("Enter Three number : \n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    FindGreater(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;
}