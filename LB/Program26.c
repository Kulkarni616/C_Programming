#include <stdio.h>
#include <stdlib.h>

int main()
{
   char sname[30];
   printf("Enter your name :  \n");
   scanf("%[^'\n']s",sname);    //special scanf

   printf("Welocme %s\n",sname);

   return EXIT_SUCCESS;
}