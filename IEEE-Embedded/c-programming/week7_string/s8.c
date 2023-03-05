//Program to count number of alphabets, digits and special characters in string

#include <stdio.h>
#define MAX 100

int main()
{
    char str[MAX];
    char * s = str;


    printf("Input string1: ");
    gets(str);

    int alphabets, digits, others, i;
    alphabets = digits = others = i = 0;
     while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alphabets++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        else
        {
            others++;
        }

        i++;
    }

    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d", others);

    return 0;
}



