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

int main()
{

    int iValue1 , iValue2 ,iResult ;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    iResult= iValue1 + iValue2;  //Business logic

    printf ("%d\n",iResult);
    
    return 0 ;

}
     