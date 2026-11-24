#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool CheckPallindrome( int iNo)
{
       int iRev = 0;
       int iDgit = 0 ;
       
       while(iNo != 0)
       {
         iDgit = iNo % 10;
         iRev = (iRev * 10)+ iDgit;

         iNo = iNo/10;

       }
       
       
       if(iRev == iNo)   //Issue
       {
         return true;
       }
       else
       {
         return false;
       }


}




int main()
{
    int iValue = 0 ;
    bool bRet = false;


    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);

    if(bRet == true)
    {
      printf("number is palindrome \n");

    }
    else
    {
      printf("number is not Palindrome \n");

    }
    
    
    return EXIT_SUCCESS;
}