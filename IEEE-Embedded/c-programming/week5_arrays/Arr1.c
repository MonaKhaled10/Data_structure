
//C program to declare, initialize, input and print array element
#include<stdio.h>

int main()
{
int n;
printf("Input size :");
scanf("%d",&n);
printf("Input elements :");
int arr[n];

    for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);

    }
    printf("output: ");
     for(int i=0;i<n;i++){

    printf("%d ",arr[i]);



    }}
