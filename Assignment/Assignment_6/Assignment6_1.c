#include <stdio.h>
#include <stdlib.h>

void CalculateElectricityBill(int iUnit)
{  
   float fBill = 0.0f;

   if(iUnit < 0)
   {
     printf("Invalid Unit\n");
     return;
   }

   if((iUnit >= 0) && (iUnit <= 100))
   {
        fBill = (iUnit * 5 );
        printf("Total bill : %f\n",fBill);
   }
   else if( (iUnit >=100) && (iUnit <= 200))
   {
        fBill = 500+(iUnit - 100)*7;
        printf("Total bill : %f\n",fBill);

   }
   else 
   {
        fBill = 1200+(iUnit - 200)*10;
        printf("Total bill : %f\n",fBill);

   }

}

int main()
{   
    int iUnit = 0;

    printf("Enter consumed unit: \n");
    scanf("%d",&iUnit);

    CalculateElectricityBill(iUnit);


    return EXIT_SUCCESS;
}