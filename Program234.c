#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{  
   char Arr[100];

   printf("Enter string:\n");

   scanf("%[^'\n']s",Arr);  //string should be stop when we get \n

   printf("Entered string is :%s\n",Arr);
   
   return EXIT_SUCCESS;
}