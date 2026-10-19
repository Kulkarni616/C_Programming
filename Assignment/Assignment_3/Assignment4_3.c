#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void DisplayConvert( char CValue)
{
  
    if(((CValue >= 'A') && (CValue <= 'Z')))
    { 
        CValue = CValue + 32;
        printf("%c\n",CValue);
    }
    else if(((CValue >= 'a') && (CValue <= 'z')))
    {
        CValue = CValue - 32;
        printf("%c\n",CValue);

    }

}
   
int main()
{
    char cValue = '\0';
    
    printf("Enter character: \n");
    scanf(" %c",&cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}