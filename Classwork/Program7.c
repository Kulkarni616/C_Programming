/* 

   Step 1 : Understand the problem statement
   Step 2 : Write the program
   Step 3 : Decide the progam language
   Step 4 : Write the program
   Step 5 : Test the program

*/ 

////////////////////////////////////////////////////////
//
// Step 1 : Understand the problem statements
//          User is going to enter any 2 integers
//          And we have to perform addition
//
////////////////////////////////////////////////////////

////////////////////////////////////////////////////////
//
// Step 2  : Write the program
/*
   START
      Accept first number as No1
      Accept second number as No2
      Create the variable as ans to store the result
      Perfrom the addition and strore in ans
      Display the result from ans
   STOP   
*/
//
////////////////////////////////////////////////////////

////////////////////////////////////////////////////////
//
// Step 3 : Dedcide the programmming lanuage
//          We select c Programming
//
//////////////////////////////////////////////////////// 

////////////////////////////////////////////////////////
//
// Step 4 : Write the program
//
////////////////////////////////////////////////////////


#include <stdio.h>

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


int Addition( int iNo1 , int iNo2)
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
    
    return 0 ;

}
     