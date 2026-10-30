#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
   int iCnt1 = 0;
   int iCnt2 = 0;

   int iNo2 = 0;

   if(iNo < 0)
   {
      printf("Invalid input\n");
      return;
   }

   if(iNo > 0)
   {
       iNo2 = iNo;    //pre-reserved original value
       iNo =- iNo;

       for(iCnt1 = iNo; iCnt1 <= iNo2 ; iCnt1++)
       {
         printf("%d\t",iCnt1);
       }
       printf("\n");
       
   }
   
   
}

int main()
{ 
   int iValue = 0;

   printf("Enter the Value:\n");
   scanf("%d",&iValue);

   Display(iValue);

   return EXIT_SUCCESS; 

}


