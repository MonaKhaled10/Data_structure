#include <stdio.h>
#include <stdlib.h>

//C program to find maximum and minimum using functions
int main(){
    int n1,n2;
    printf("input two numbers:" );
     scanf("%d %d",&n1,&n2);
     max(n1,n2);
     }


     int max(int n1,int n2 ){
     if(n1>n2)
     printf("Maximum = %d\nMinumum = %d",n1,n2);
     else
        printf("Maximum = %d\nMinumum = %d",n2,n1);
     }

