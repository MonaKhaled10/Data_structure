// C program to delete an element from array
#include<stdio.h>

void main()
{

    int n,i,pos;

    printf("\n Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];

    printf("\n Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the element position : ");
    scanf("%d", &pos);
    for(int i=pos;i<n;i++){
            arr[i]=arr[i+1];}
             
             n--;
             for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

    }