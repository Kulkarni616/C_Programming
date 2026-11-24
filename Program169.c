#include <stdio.h>
#include <stdlib.h>

float AvarageDigits( int iNo)
{

       int iDigit = 0;
       int iCount = 0;
       int iSum = 0;
       float fAvg = 0 ;

       if( iNo < 0)
       {
         iNo = -iNo;

       }

      while( iNo !=0)
      {
       iDigit = iNo % 10;
       iSum = iSum + iDigit;
       iNo = iNo /10;
       iCount ++;
      }

      fAvg = iSum / iCount;  // need of typecasting
      return fAvg;

       
    
  
}


int main()
{
    int iValue = 0;

    float fRet = 0.0f;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    fRet = AvarageDigits(iValue);

    printf("Avarage of Digits : %f\n",fRet);

    return EXIT_SUCCESS;
}