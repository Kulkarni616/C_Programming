#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void CheckCharaterType( char CValue)
{
  
    if(((CValue >= 'A') && (CValue <= 'Z')))
    { 
        printf("Upper Alphabet\n");
    }
    else if(((CValue >= 'a') && (CValue <= 'z')))
    {
        printf("Lower Alphabet\n");
    }
    else if(((CValue >= '0') && (CValue <= '9')))
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }

}
   
int main()
{
    char cValue = '\0';
    
    printf("Enter character: \n");
    scanf(" %c",&cValue);

    CheckCharaterType(cValue);

    return EXIT_SUCCESS;
}