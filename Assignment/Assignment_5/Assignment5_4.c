#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(int iValue)
{  
    if(((iValue % 3 )== 0) && ((iValue % 5) == 0))
    {
      printf("Number is Divisible by 5 and 3\n");
    }
    else if (iValue % 3 == 0)
    {
      printf("Number is Divisible by 3 only\n");
    }
    else if (iValue % 5 == 0)
    {
      printf("Number is Divisible by 5\n");
    }
    else
    {
      printf("Number is not Divisible by 5 and 3\n");
    }
    
}

int main() 
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}