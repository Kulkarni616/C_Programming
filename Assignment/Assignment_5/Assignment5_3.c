#include <stdio.h>
#include <stdlib.h>

void DisplayGrade( float fMarks)
{
    if( (fMarks >= 90) && (fMarks <= 100))
    {
        printf("Grade : A\n");
    }
    else if((fMarks >= 75) && (fMarks <= 89))
    {
        printf("Grade : B\n");
    }
    else if((fMarks >= 60) && (fMarks <= 74))
    {
        printf("Grade : C\n");
    }
    else if((fMarks >= 40) && (fMarks <= 59))
    {
        printf("Grade : D\n");
    }
    else if (fMarks < 40)
    {
        printf("FAIL\n");
    }
    else
    {
        printf("Invalid input\n");
    }
}

int main()
{   
    float fMarks = 0.0f;

    printf("Enter the marks : \n");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}