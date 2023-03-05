//C program to count total number of duplicate elements in an array


#include <stdio.h>
int main()
{
    int arr[1000];
    int i, j, n, count = 0;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {

            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }

    printf("\nTotal number of duplicate elements  = %d", count);

    return 0;
}
