//C program to swap two arrays
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


    void swap(int*arr1,int *arr2,int size)
{
    int *arr1last=(arr1+(size-1));
    int *arr2last=(arr2+(size-1));
    while(arr1<=arr1last&&arr2<=arr2last)
    {

        *arr1 ^= *arr2;
        *arr2   ^= *arr1;
        *arr1 ^= *arr2;

        arr1++;
        arr2++;
    }
    }


int main()
{
    int arr1[MAX];
    int arr2[MAX];
    int size;

    int * ptr1 = arr1;
    int * ptr2 = arr2;

    printf("Please enter size of array1: ");
    scanf("%d", &size);

    printf("Please enter elements of array1:\n");
    input(arr1, size);


    printf("Please enter elements of array2:\n");
    input(arr2, size);


    printf("\narr1 elements before swapping: ");
    display(arr1, size);
    printf("\narr2 elements before swapping: ");
    display(arr2, size);



    ptr1 = arr1;
    ptr2 = arr2;

    swap(ptr1,ptr2,size);
    printf("\narr1 elements after swapping: ");
    display(arr1, size);
    printf("\narr2 elements after swapping: ");
    display(arr2, size);

}