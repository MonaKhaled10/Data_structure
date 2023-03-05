#include <stdio.h>
#include <math.h>

#define base 2

int main()
{
    long long binary, decimal=0, tempBinary;
    int N=0;

    printf("Enter any binary number: ");
    scanf("%lld", &binary);

    tempBinary = binary;

    while(tempBinary!=0)
    {

        if(tempBinary % 10 == 1)
        {
            decimal += pow(base, N);
        }

        N++;
        tempBinary /= 10;
    }
    printf("Decimal number= %lld", decimal);

    return 0;
}
