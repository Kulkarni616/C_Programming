#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Display( int iNo1)
{
  if(iNo1 < 10)
  {
    printf("Hello\n");
  }
  else
  {
    printf("Demo\n");
  }
}

int main()
{
    int iValue = 0;
    
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return EXIT_SUCCESS;
}