
#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////
//
// Function Name : Addition
// Input         : Integer , Integer
// Output        : Integer
// Description   : Performs additions
// Date          : 04/10/2026
// Author        : Snehal Sunil Kulkarni 
//
////////////////////////////////////////////////////////


int Addition(  
               int iNo1 ,   //First input
               int iNo2     //Second input
            
            )
{
   int iAns = 0;

   iAns = iNo1 + iNo2 ;   //Business logic

   return iAns;

}

////////////////////////////////////////////////////////
//
// Entry point of the application
//
////////////////////////////////////////////////////////


int main()
{

   int iValue1 = 0 , iValue2 = 0 ,iResult = 0 ;        // for int = 0, float = 0.0f , double = 0.0 , ch = \0 , pointer = NULL

   printf("Enter first number : \n");
   scanf("%d",&iValue1);

   printf("Enter second number : \n");
   scanf("%d",&iValue2);

   iResult= Addition(iValue1 , iValue2); 
   
   printf ("Addition is : %d\n",iResult);
   
   return EXIT_SUCCESS ;                     //0 = EXIT_SUCCESS , -1 = EXIT_FAILURE

}

////////////////////////////////////////////////////////
//
// Step 5 : Test the program
//
//          Tested test cases
// -------------------------------
//    Input 1   Input 2  Output
// -------------------------------
//     10         11       21
//     11          0       11
//     0          11       11
//     20         -9       11
//    -9          20       11
//    -20        -11      -31
//
////////////////////////////////////////////////////////

   
