#include <stdio.h>
#include <stdlib.h>


void Display( char *str)   // same as str[]
{

  printf("%s\n",str);

}

int main()
{
    char Arr[]="Ganesh";

    Display(Arr);

    return EXIT_SUCCESS;
}