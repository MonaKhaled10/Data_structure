//C program to compare two strings


#include <stdio.h>
#define MAX 100

int main()
{
    char string[MAX];
    char string2[MAX];
    char * s = string;


    printf("Input string1: ");
    gets(string);
     printf("Input string2: ");
    gets(string2);
     int res;
     res = compare(string, string2);

    if(res == 0)
    {
        printf("Both strings are equal.");
    }
    else if(res < 0)
    {
        printf("First string is lexicographically smaller than second.");
    }
    else
    {
        printf("First string is lexicographically greater than second.");
    }

    return 0;
}

int compare(char * string, char * string2)
{    while((*string && *string2) && (*string == *string2)) { string++; string2++; }

    return *string - *string2;
}


