//C program to find reverse of array
#include <stdio.h>

int main()
{

    int n, i;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nArray in reverse order: ");
    for(i = n-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
