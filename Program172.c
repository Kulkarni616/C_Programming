#include <stdio.h>
#include <stdlib.h>

int SumDigits( int iNo)
{

       int iDigit = 0;
       int iSum = 0;

       while (iNo != 0)
       {
       
       iDigit = iNo % 10;
       iSum = iSum + iDigit;
       iNo = iNo /10;
       }
       return iSum;
  
}

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
       iDigit = iNo % 10;
       iNo = iNo /10;
       iCount ++;
      }

       return iCount;

       
    
  
}

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

       iCount = CountDigits(iNo);
       iSum = SumDigits(iNo);
       fAvg = (float)iSum /(float)iCount;  // need of typecasting
       return fAvg;

       
    
  
}


int main()
{
    int iValue = 0;

    float fRet = 0.0f;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    fRet = AvarageDigits(iValue);

    
    printf("Avarage of Digits : %.2f\n",fRet);   //bandwidth manage

    return EXIT_SUCCESS;
}