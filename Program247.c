#include <stdio.h>
#include <stdlib.h>

int Countx( char *str)
{
  int iCount = 0;
  char ch1 = '\0';
  char ch2 = '\0';


  ch1 = 'A';
  ch2 = 'a';


  while( *str != '\0')
  {
    if((*str == ch1) || (*str == ch2) )
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