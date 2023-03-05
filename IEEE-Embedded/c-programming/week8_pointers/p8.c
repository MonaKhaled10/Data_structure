//C program to search in  array using pointers
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

int search(int * arr, int size, int search)
{
int flag;

int *StartIndex = arr;
int *arrEnd = (arr + size - 1);

while(StartIndex <= arrEnd && *StartIndex !=search)
StartIndex++;

if(StartIndex <= arrEnd)
flag = 1;
else
flag = 0;

if(flag == 0)
printf("%d does not exists in array.",search);
else
printf("%d exists in the array.",search);

}

int main()
{
    int arr[MAX];
    int size;
    int s;
    printf("Please enter size of array1: ");
    scanf("%d", &size);

    printf("Please enter elements of array:\n");
    input(arr, size);

    printf("\narr1 elements before reversing: ");
    display(arr, size);
    printf("Please enter element you want to Search: ");
    scanf("%d", &s);
    search(arr,size,s);




}