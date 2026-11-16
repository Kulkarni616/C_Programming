#include <stdio.h>
#include <stdlib.h>

void Pattern(int iRows , int iCol)
{ 
    int i,j;
    char ch = '\0';

    ch = 'A';

    for( i = 1 ; i <= iRows ; i++)
    {
        for( j = 1; j <= iCol ; j++)
        {
          printf(" %c\n",ch);
         
        }
        ch++;
        printf("\n");

    }

}

int main()
{   
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter the Rows and colunms:\n");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}