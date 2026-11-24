/*
   Input : 4

   Output: a b c d

*/


#include <stdio.h>
#include <stdlib.h>



int main()
{   
    int iCnt = 0;
    
    for( iCnt = 65 ; iCnt <=90 ; iCnt++)   // A to Z
    {
      printf("%d\t%o\t%x\t%c\n",iCnt,iCnt,iCnt,iCnt);

    }
   
    
    return EXIT_SUCCESS;
}