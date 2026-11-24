/*
   Input : 4

   Output: a b c d

*/


#include <stdio.h>
#include <stdlib.h>



int main()
{   
    int iCnt = 0;
    
    for( iCnt = 97 ; iCnt <=122 ; iCnt++)   // a to z
    {
      printf("%c\n",iCnt);

    }
   
    
    return EXIT_SUCCESS;
}