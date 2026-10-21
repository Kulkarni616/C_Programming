#include <stdio.h>
#include <stdlib.h>

void CalculateBouns(float fSalary , int iYear)
{  

  float fBouns = 0.0f;

  if( (fSalary < 0 ) || (iYear < 0))
  {
    printf("Invalid input\n");
    return;
  }

  if( iYear > 10 )
  {
     fBouns = ((float)15/100 * fSalary);
     printf("Bouns is : %f\n",fBouns);

  }
  else if((iYear >= 5 ) && ( iYear <= 10))
  {
      fBouns = ((float)10/100 * fSalary);
      printf("Bouns is : %f\n",fBouns);
  }
  else 
  {
      fBouns = ((float)5/100 * fSalary);
      printf("Bouns is : %f\n",fBouns);
  }
}

int main()
{   
    float fSalary = 0;
    int iYear = 0;

    printf("Enter Salary and year of services : \n");
    scanf("%f%d",&fSalary,&iYear);

    CalculateBouns(fSalary,iYear);

    return EXIT_SUCCESS;
}