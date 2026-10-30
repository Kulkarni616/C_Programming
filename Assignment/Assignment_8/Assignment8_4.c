#include <stdio.h>
#include <stdlib.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iAns = 0;

    if(iNo < 0)
    {
        iNo =- iNo;
    }
    
    for( iCnt = 1 ; iCnt <= 10 ; iCnt++)
    {
        iAns = iNo * iCnt;
        printf("%d\t",iAns);
    }
    printf("\n");
    


}

int main()
{   
    int ivalue = 0;

    printf("Enter the Number\n");
    scanf("%d",&ivalue);

    Table(ivalue);

    return EXIT_SUCCESS;
}