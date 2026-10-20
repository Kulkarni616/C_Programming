#include <stdio.h>
#include <stdlib.h>

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