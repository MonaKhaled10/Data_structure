//C program to reverse array using poiters
#include <stdio.h>
#define MAX 50

void display(int *arr, int size)
{
    int *arrEnd = (arr + (size - 1));
    while(arr <= arrEnd)
        printf("%d",*(arr++));
}


void input(int *arr, int size)
{
    int *arrEnd = (arr + (size - 1));
    while(arr <= arrEnd)
        scanf("%d", arr++);
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(int arr[], int size)
{

    // pointer1 pointing at the beginning of the array
    int *ptr1 = arr,

    // pointer2 pointing at end of the array
    *ptr2 = arr + size - 1;
    while (ptr1 < ptr2) {
        swap(ptr1, ptr2);
        ptr1++;
        ptr2--;
    }
}


int main()
{
    int arr[MAX];
    int size;

    int * ptr1 = arr;

    printf("Please enter size of array1: ");
    scanf("%d", &size);

    printf("Please enter elements of array:\n");
    input(arr, size);

    printf("\narr1 elements before reversing: ");
    display(arr, size);
     reverse(arr,size);
    printf("\narr1 elements after reversing: ");
    display(arr, size);




}