//C program to convert string to lowercase


#include <stdio.h>
#define MAX 100

int main()
{
    char string[MAX];
    char * s = string;
     int i;

    printf("Input string1: ");
    gets(string);

    for(i=0; string[i]!='\0'; i++)
    {
        if(string[i]>='A' && string[i]<='Z')
        {
            string[i] = string[i] + 32;
        }
    }

    printf("Lower case string: %s", string);

    return 0;
}



