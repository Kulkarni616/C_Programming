#include <stdio.h>
#include <stdlib.h>


////////////////////////////////////////////////////////
//
// Function Name : CheckTriangle
// Input         : Integer, Integer, Integer 
// Output        : None
// Description   : Checks Whether Three Sides Can Form
//                 a Valid Triangle
// Date          : 22/10/2026
// Author        : Snehal Sunil Kulkarni 
//
////////////////////////////////////////////////////////

void CheckTriangle(int iSide1 , int iSide2 , int iSide3)
{  

   if( (iSide1 < 0) || (iSide2 < 0)  || (iSide3 < 0))
   {
      printf("Invalid Input\n");
      return;
   }

   if(((iSide1 + iSide2) > iSide3) && ((iSide1 + iSide3)> iSide2) && ((iSide2+iSide3)> iSide1))
   {
      printf("Valid Triangle\n");
   }
   else
   {
      printf("Invalid Triangle\n");
   }

}

int main()
{   
    int iSide1 = 0 , iSide2 = 0 , iSide3 = 0 ;

    printf("Enter three side: \n");
    scanf("%d %d %d",&iSide1,&iSide2,&iSide3);

    CheckTriangle(iSide1,iSide2,iSide3);

    return EXIT_SUCCESS;
}