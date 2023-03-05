//C program to copy one array to another using pointers
#include <stdio.h>
#define MAX 50

void display(int arr[],int size )
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("% d",*(arr+i));
    }


}
int main()
{
    int arr1[MAX], arr2[MAX], size, i;
    int *ptr1 = arr1;
    int *ptr2 = arr2;
    int *last = &arr1[size - 1];
    printf("Enter size of array: ");
    scanf("%d", &size);
    /*Running for loop to input array elements from user*/
    printf("Please input arr1 elements: ");
    for (i = 0; i <= size; i++) {
        scanf("%d", ptr1 + i);
    }

    printf("\narr1 elements before coping: ");
    display(arr1, size);

   /* printf("\narr2 elements before coping: ");
    display(arr2, size);*/
   while(ptr1<=last)
   {

       *ptr2=*ptr1;
       ptr1++;
       ptr2++;

   }
    printf("\narr1 elements after coping: ");
    display(arr1, size);


}
