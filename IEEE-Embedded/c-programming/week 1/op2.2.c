#include <stdio.h>


int main()
{
    int num, n,bits;


    printf("Input number: ");
    scanf("%d", &num);


    printf("Input th n number: ");
    scanf("%d", &n);



    if((num >> n) & 1)
        printf("2 bit of %d is set (1) ", num);
    else
        printf("2 bit of %d is set (0) ", num);

    return 0;
}
