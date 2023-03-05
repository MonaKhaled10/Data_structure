#include <stdio.h>

int main()
{
    int num, flippedNumber;

    printf("Input number: ");
    scanf("%d", &num);
    flippedNumber = ~num;
    printf("Number after bits are flipped = %d (in decimal)", flippedNumber);

    return 0;
}
