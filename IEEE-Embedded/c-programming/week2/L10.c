
#include <stdio.h>

int main()
{
    int n;
    int count =0;
    printf("Input Num :");
    scanf("%d",&n);

    do
    {
        count++;

        n/= 10;
    } while(n!= 0);

    printf("Total digits: %d", count);

    return 0;







    return 0;
}