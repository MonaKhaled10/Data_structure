//C program to check whether a string is palindrome or not

#include <stdio.h>
#define MAX 100
int main()
{
   char string[MAX];
   printf("Input a string :");
   gets(string);

     int flag=0;
    int length;
    length = strlen(string);

    for(int i=0;i < length ;i++){
        if(string[i] != string[length-i-1]){

            flag = 1;
            break;
           }
        }

    if (flag) {
        printf("%s is not a palindrome", string);
    }
    else {
        printf("%s is a palindrome", string);
    }
    return 0;
}
