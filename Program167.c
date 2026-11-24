#include <stdio.h>
#include <stdlib.h>

int CountDigits( int iNo)
{

       int iDigit = 0;
       int iCount = 0;

       if(iNo < 0)
       {
         iNo = -iNo;

       }

      while( iNo !=0)
      {
       iDigit = iDigit % 10;
       iNo = iNo /10;
       iCount ++;
      }

       return iCount;

       
    
  
}


int main()
{
    int iValue = 0;

    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Count of : %d\n",iRet);

    return EXIT_SUCCESS;
}