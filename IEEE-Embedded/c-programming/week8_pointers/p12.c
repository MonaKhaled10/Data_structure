// C program to find length of a string using pointer


#include <stdio.h>
#define MAX 100

int main()
{
    char string[MAX];
    char * str = string;
    int count = 0;

    printf("input string : ");
    gets(string);

    while(*(str++)) count++;

    printf("Length of string = %d", count);

    return 0;
}
