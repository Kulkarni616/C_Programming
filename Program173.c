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
       iDigit = iNo % 10;
       iNo = iNo /10;
       iCount ++;
      }

       return iCount;

       
    
  
}

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

float AvarageDigits( int iTotal,int iFrequency)
{
       float fAns = 0.0f;
       fAns = (float)iTotal/(float)iFrequency;
       return fAns;

}


int main()
{
    int iValue = 0 , iSum = 0 , iCount = 0;

    float fAvg = 0.0f;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    iCount = CountDigits(iValue);
    iSum = SumDigits(iValue);
  
    fAvg = AvarageDigits(iSum,iCount);
   
    printf("number of digit : %d\n",iCount);
    printf("Summation of digits : %d\n",iSum);

    printf("Avarage of Digits : %.2f\n",fAvg);   //bandwidth manage

    return EXIT_SUCCESS;
}