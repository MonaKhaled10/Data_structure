//C program to copy one string to another string


#include <stdio.h>
#define MAX 100

int main()
{
    char string[MAX];
    char string2[MAX];
    char * s = string;
    int c = 0;

    printf("Input string: ");
    gets(string);

     int i;
       for (i=0; string[i]!='\0'; i++)
    {
        string2[i] = string[i];
    }


    string2[i] = '\0';

    printf("original string = %s\n", string);
    printf("copied = %s ", string2);

    return 0;}
