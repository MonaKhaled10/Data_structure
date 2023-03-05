// C program to return multiple value from a function using array.
#include <stdio.h>
#define MAX 10

int * getNumbers(int N, int * numbers);

int main()
{
    int numbers[MAX];
    int i;

    getNumbers(MAX, numbers);

    printf("First %d even numbers are: \n", MAX);
    for (i = 0; i < MAX; i++)
    {
        printf("%d ", *(numbers + i));
    }


    return 0;
}



int * getNumbers( int N, int * numbers)
{
    int i;

    for (i = 0; i < N; i++)
    {

        *(numbers + i) =  2*(i + 1);
    }

    return numbers;
}