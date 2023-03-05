//youssef shawky lec sorting

//C program to sort an array using bubble sort
#include <stdio.h>

int main()
{

    int n, i,j,temp,sorted;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    do {
            sorted =1;
  for(i=0; i<n; i++)
    {
      if(arr[i]>arr[i+1]){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        sorted =0;
      }
    }}
    while(sorted==0);
      printf("\nElements of array using bubble sorting: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }}
