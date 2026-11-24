// $ # * &
#include <stdio.h>
#include <stdlib.h>

int CountFrequencyx( char *str)
{
  int iCountSmall = 0,iCountCapital = 0,iCountDigits = 0;

  while( *str != '\0')
  {
    if( ((*str >= 'a') && (*str <= 'z'))) 
    {
      iCountSmall++;

    }else if ((*str >= 'A') && (*str <= 'Z'))
    {
      iCountCapital++;

    }
    else //Issue because special character also their
    {
      iCountDigits++;

    }
    
    str++;

}

    printf("Frequency of small letters :%d\n",iCountSmall);
    printf("Frequency of Capital letters :%d\n",iCountCapital);
    printf("Frequency of Digits :%d\n",iCountDigits);


}


int main()
{
  char Arr[100] = {'\0'};

  printf("Enter string:\n");

  scanf("%[^'\n']s",Arr);

  CountFrequencyx(Arr);
   
  return EXIT_SUCCESS;
}