#include <stdio.h>
#include <stdlib.h>


////////////////////////////////////////////////////////
//
// Function Name : CalculateDiscount
// Input         : Float 
// Output        : None
// Description   : Calculates the Discount and Final
//                 Purchase Amount
// Date          : 22/10/2026
// Author        : Snehal Sunil Kulkarni 
//
////////////////////////////////////////////////////////

void CalculateDiscount(float fAmount)
{  
   
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

   if(fAmount < 0)
   {
     printf("Invalid input\n");
     return;
   }

    if( (fAmount > 0) && (fAmount < 1000))
    {
     fDiscount = (float)0/100;
     fFinalAmount = (fAmount - (fDiscount * fAmount) );
     printf("Discount is : %f\n",fDiscount);
     printf("Final amount is : %f\n",fFinalAmount);
    }
    else if((fAmount > 1000 ) && (fAmount < 5000))
    {
     fDiscount = (float)10/100 ;
     fFinalAmount = (fAmount - (fDiscount * fAmount) );
     printf("Discount is : %f\n",fDiscount);
     printf("Final amount is : %f\n",fFinalAmount);
    }
    else
    {
     fDiscount = (float)20/100;
     fFinalAmount = (fAmount - (fDiscount * fAmount) );
     printf("Discount is : %f\n",fDiscount);
     printf("Final amount is : %f\n",fFinalAmount);
    }

}

int main()
{   
    float fAmount = 0;
    
    printf("Enter the Purchase amount: \n");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}