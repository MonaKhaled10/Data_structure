//C program to find reverse of a string using pointers
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main() {
    int len, i;
    char str[100], *start, *end, ch;

    printf(" Enter a string: ");
    gets(str);
    len = strlen(str);

    //pointers initialized by str
    start = str;
    end = str;

    // Move endptr to the last character
    for (i = 0; i < len - 1; i++)
        end++;

// swap character

    for (i = 0; i < len / 2; i++) {
        ch = *end;
        *end = *start;
        *start = ch;

        // refresh pointers positions
        start++;
        end--;
    }

    printf("reversed string : %s", str);
}