
//C program to sort array in ascending or descending order
#include <stdio.h>

int main()
{
    
    int n, i,j,temp;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
  for(i=0; i<n; i++)
    {for(j=i+1;j<n;j++){
      if(arr[i]>arr[j]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }}
      printf("\nElements of array in ascending order: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
   for(i=0; i<n; i++)
    {for(j=i+1;j<n;j++){
      if(arr[i]<arr[j]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }}
      printf("\nElements of array in descending order: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
