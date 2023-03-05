// C program to insert an element in array
#include<stdio.h>

void main()
{

    int n,i,num,pos;
     
    printf("\n Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];

    printf("\n Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to insert : ");
    scanf("%d", &num);
    printf("Enter the element position : ");
    scanf("%d", &pos);
      n++;
   for (i = n-1; i >= pos; i--)
        arr[i] = arr[i - 1];
        arr[pos - 1] = num;

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

/*// C program to insert an element in array another solution
#include<stdio.h>

void main()
{

    int n,i,num,pos;

    printf("\n Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];

    printf("\n Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to insert : ");
    scanf("%d", &num);
    printf("Enter the element position : ");
    scanf("%d", &pos);
    for(int i=n;i>=pos;i--){
            arr[i+1]=arr[i];}
             arr[pos]=num;
             n++;
             for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

    }*/
