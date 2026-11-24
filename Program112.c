#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckPrime( int iNo)
{
  int iCnt = 0;
  
  for(iCnt = 2; iCnt <= iNo/2 ; iCnt++)
  {
     if((iNo % iCnt )==0)
     {
        break;    // in loop use brak and contineoue  not return

     }

  }

  if(iCnt == (iNo/2 + 1))
  {
    return true;
  }
  else
  {
    return false;
  }

}

int main(void)            
{
     int iValue = 0;
     bool bRet = false;
     
     printf("Enter the number:\n");
     scanf("%d",&iValue);
     
     bRet = CheckPrime(iValue);

     if(bRet)
     {
       printf("It Is Prime Number\n");
     }
     else
     {
       printf("It Is Not Prime Number\n");

     }

    return EXIT_SUCCESS;
}