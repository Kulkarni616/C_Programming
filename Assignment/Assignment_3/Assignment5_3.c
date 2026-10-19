#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

bool ChkVowel( char CValue)
{

  if((CValue == 'a') || (CValue =='e') || (CValue =='i') || (CValue =='o') || (CValue =='u'))
  {
     return TRUE;
  }
  else
  {
     return FALSE;
  }

}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    
    printf("Enter Character : \n");
    scanf(" %c",&cValue);

    bRet = ChkVowel(cValue);

    if( bRet == TRUE)
    {
      printf("It is vowel\n");
    }
    else
    {
      printf("It is not vowel\n");
    }
    
    return EXIT_SUCCESS;
}


  //(CValue =='A') || (CValue =='E') || (CValue =='I') || (CValue =='O') || (CValue ||'U'))
