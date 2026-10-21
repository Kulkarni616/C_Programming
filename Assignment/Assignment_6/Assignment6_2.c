#include <stdio.h>
#include <stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{  

   if((iAge < 0 ) || ((fMarks < 0 ) || (fMarks > 100)))
   {
     printf("Invalid input\n");
     return;
   }
   
   if((iAge >= 17 ) && (fMarks >= 60))
   {
     printf("Eligible For Admission\n");
   }
   else
   {
     printf("Not Eligible \n");
   }

}

int main()
{   
    float fMarks = 0;
    int iAge = 0;

    printf("Enter the marks: \n");
    scanf("%f",&fMarks);

    printf("Enter the Age: \n");
    scanf("%d",&iAge);   

    CheckAdmission(fMarks,iAge);

    return EXIT_SUCCESS;
}