#include <stdio.h>
#include <stdlib.h>


int Reverse( int iNo)
{
       int iRev = 0;
       int iDgit = 0 ;

       while(iNo != 0)
       {
         iDgit = iNo % 10;
         iRev = (iRev * 10)+ iDgit;

         iNo = iNo/10;

       }

       return iRev;


}




int main()
{
    int iValue = 0 ;
    int iRet = 0;


    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);
    
    printf("Reverse number is : %d\n", iRet);
    
    return EXIT_SUCCESS;
}