
#include "header.h"

////////////////////////////////////////////////////////
//
// Entry point of the application
//
////////////////////////////////////////////////////////


int main()
{

    int iValue1 = 0 , iValue2 = 0 ,iResult = 0 ;        // for int = 0, float = 0.0f , double = 0.0 , ch = \0 , pointer = NULL

    printf("Enter first number : \n");
    if(scanf("%d",&iValue1)!= 1)
    {
      fprintf(stderr,"Unable to proceed as input is invalid\n");

      return EXIT_FAILURE;
    }

    printf("Enter second number : \n");
    if(scanf("%d",&iValue2)!= 1)
    {
      fprintf(stderr,"Unable to proceed as input is invalid\n");
      
      return EXIT_FAILURE;
    }

    iResult= Addition(iValue1 , iValue2); 
     
    printf ("Addition is : %d\n",iResult);
    
    return EXIT_SUCCESS ;                     //0 = EXIT_SUCCESS , -1 = EXIT_FAILURE

}


