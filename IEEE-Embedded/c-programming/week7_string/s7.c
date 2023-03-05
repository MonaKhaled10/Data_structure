//C program to toggle strings


#include <stdio.h>
#define MAX 100

int main()
{
    char str[MAX];
    char * s = str;
     int i=0;

    printf("Input string1: ");
    gets(str);


    while(str[i] != '\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
        }

    printf("Toggled string: %s", str);

    return 0;

}
