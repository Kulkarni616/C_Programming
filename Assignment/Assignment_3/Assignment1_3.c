#include <stdio.h>
#include <stdlib.h>

void PrintEven( int iNo1)
{

  if(iNo1 <= 0)
  {
     return ;
  }
  else
  {
     int iCnt = 0;
     for(iCnt = 1; iCnt<=(iNo1*2); iCnt++)
     {  
        if( iCnt % 2 == 0)
        printf("%d ",iCnt);

     }
     printf("\n");
  }

}

int main()
{
    int iValue = 0;
    
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}