#include <stdio.h>
#include <stdlib.h>

//for loop - time complexity (n\2)
//space - dynamic memory allocation
void Display( int iNo)
{
    int iCnt = 0;
    
    for( iCnt = 1 ; iCnt <= iNo ; iCnt+= 2)
    {
        printf("%d\t",iCnt);

    }
    printf("\n");
    
}

int main()
{
   int iValue = 0;
   printf("Enter the frequency : \n");
   scanf("%d",&iValue); 
   Display(iValue);    
   return EXIT_SUCCESS;

}