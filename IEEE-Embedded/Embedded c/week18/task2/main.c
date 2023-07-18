#include <stdio.h>
#include<stdlib.h>

int main() {
    int n;
    int *arr;
    int sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    arr = (int *)malloc(sizeof(int) * n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }

    printf("The sum of the elements of the array is %d\n", sum);

    free(arr);

    return 0;
}
