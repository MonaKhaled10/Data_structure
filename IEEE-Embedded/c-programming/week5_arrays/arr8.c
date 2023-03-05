//C program to copy all elements of one array to another
#include<stdio.h>

int main()
{

    int n,i;

    printf("Enter number of elements:" );
    scanf("%d",&n);
    int a[n];
    int b[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
  for(i=0;i<n;i++)
    {
       b[i]=a[i];
    }
    printf("\nArary1:");
     for(i=0;i<n;i++)
    {
       printf("%d ",a[i]);
    }
     printf("\nArary2:");
     for(i=0;i<n;i++)
    {
       printf("%d ",b[i]);
    }
}


