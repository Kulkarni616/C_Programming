#include <stdio.h>
#include <stdlib.h>


void Display( int *ptr)
{
   printf("%d\n",ptr);  


}

int main()
{   
   int arr[5]={10,20,30,40,50};
   
   printf("%d\n",arr);
   
   Display(arr);  //Display(100)
  
   return EXIT_SUCCESS;
}

 