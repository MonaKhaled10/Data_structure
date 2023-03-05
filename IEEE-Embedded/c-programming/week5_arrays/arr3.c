
//C program to find sum of array elements
#include<stdio.h>
int main()
{
int N;
int sum=0;
printf("Enter size of the array: ");
scanf("%d", &N);
printf("Input elements :");
int arr[N];

    for(int i=0;i<N;i++){
            scanf("%d",&arr[i]);

    }
    printf("sum of all elements: ");
     for(int i=0;i<N;i++){
       sum+=arr[i];

    }
     printf("%d ",sum);}
