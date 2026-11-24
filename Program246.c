#include <stdio.h>
#include <stdlib.h>

int Countx( char *str)
{
  int iCount = 0;
  char ch = '\0';

  ch = 'A';

  while( *str != '\0')
  {
    if( *str == ch )
    {
     iCount++;
    }

    str++;

  }

  return iCount;

}


int main()
{
  char Arr[100] = {'\0'};
  int iRet = 0;

  printf("Enter string:\n");

  scanf("%[^'\n']s",Arr);

  iRet = Countx(Arr);
   
  printf("Frequency of a is : %d\n",iRet);

  return EXIT_SUCCESS;
}