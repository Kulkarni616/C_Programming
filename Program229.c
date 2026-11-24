#include <stdio.h>
#include <stdlib.h>


int main()
{
   char Arr[100]={'G','A','N','E','S','H','\0','P','U','N','E'}; //when you write after \0 the value after that will not display

   printf("%s\n",Arr);

   printf("Size of Array is:%d\n",sizeof(Arr));

   return EXIT_SUCCESS;
}