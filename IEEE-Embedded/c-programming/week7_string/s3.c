//C program to concatenate two strings 


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

     int i,j;
     i=0;
     while(string[i] != '\0')
    {
        i++;
    }


      j = 0;
    while(string2[j] != '\0')
    {
        string[i] = string2[j];
        i++;
        j++;
    }



    string[i] = '\0';

    printf("Concatenated string = %s", string);

    return 0;}

