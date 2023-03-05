#include <stdio.h>
#include <math.h>

int main()
{
    double n, root;
    
    printf("Enter any number: ");
    scanf("%lf", &n);

    root = sqrt(n);

    printf("Square root of %.2lf = %.2lf", n, root);

    
}