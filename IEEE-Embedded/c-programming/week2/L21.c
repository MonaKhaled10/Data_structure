#include <stdio.h>

int main()
{
    int base, ex;
    long power = 1;


    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &ex);


    for(int i=1; i<=ex; i++)
    {
        power = power * base;
    }

    printf("%d ^ %d = %lld", base, ex, power);

    return 0;
}
