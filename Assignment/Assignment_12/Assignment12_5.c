#include <stdio.h>
#include <stdlib.h>

int Count( int iNo)
{  
    int iDigits = 0;
    int iCount = 0;

    while( iNo != 0)
    {
       iDigits = iNo % 10 ;

       if( iDigits < 6)
       {
         iCount++;
       }

       iNo = iNo /10;
    }

    return iCount;

}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("Frequency of less than six is :%d\n",iRet);

    return EXIT_SUCCESS;
}