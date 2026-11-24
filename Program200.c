/*
   Input : 4

   Output: a b c d

*/


#include <stdio.h>
#include <stdlib.h>



int main()
{   
    char ch = '\0';
    
    for( ch = 'A' ; ch <= 'Z' ; ch++)   // A to Z
    {
      printf("%c\n",ch);

    }
   
    
    return EXIT_SUCCESS;
}