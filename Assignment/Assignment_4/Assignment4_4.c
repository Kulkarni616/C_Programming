#include <stdio.h>
#include <stdlib.h>


////////////////////////////////////////////////////////
//
// Function Name : CheckVotingEligibillity
// Input         : Integer 
// Output        : None
// Description   : Checks Whether a Person Is Eligible
//                 for Voting Based on Age
// Date          : 22/10/2026
// Author        : Snehal Sunil Kulkarni 
//
////////////////////////////////////////////////////////

void CheckVotingEligibillity(int iAge)
{  
    if(iAge > 18)
    {
      printf("Eligibile for voting\n");
    }
    else if(iAge < 0)
    {
      printf("Invalid Age\n");
    }
    else
    {
      printf("Not Eligibile for voting\n");
    }
     
}

int main() 
{
    int iAge = 0;

    printf("Enter your Age : \n");
    scanf("%d",&iAge);

    CheckVotingEligibillity(iAge);

    return EXIT_SUCCESS;
}