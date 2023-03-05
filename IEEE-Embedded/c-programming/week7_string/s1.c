//C program to find length of a string using pointer


#include <stdio.h>
#define MAX 100

int main()
{
    char string[MAX];
    char * s = string;
    int c = 0;

    printf("Input string: ");
    gets(string);


    while(*(s++) != '\0') c++;

    printf("Length of string = %d", c);

    return 0;
}
