#include <stdio.h>
#include <stdlib.h>

int CountSmallx( char *str)
{
  int iCount = 0;
  
  while( *str != '\0')
  {
    if((*str >= 'a') && (*str <= 'z')) 
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

  iRet = CountSmallx(Arr);
   
  printf("Frequency of Small letters: %d\n",iRet);

  return EXIT_SUCCESS;
}