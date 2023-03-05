#include<stdio.h>

    int main()
    {
    char ch;
    printf("Input Character:");
    scanf("%c",&ch);
   if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("'%c' is a vowel",ch);
    }
    else if(ch >= 'a' && ch <= 'z'){
         printf("'%c' is a constant",ch);
    }
    else{
        printf("'%c' is not an alphabet",ch);
    }
    return 0;


}