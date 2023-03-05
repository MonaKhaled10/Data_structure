#include <stdio.h>
 
// Function to check sum of digit using recursion
int sum_of_digit(int n)
{
    if (n == 0)
       return 0;
    return (n % 10 + sum_of_digit(n / 10));
}
 
int main()
{    int n;
    printf("Input number :");
    scanf("%d",&n);
    int result = sum_of_digit(n);
    printf("Sum of digits is %d\n", result);
    return 0;
}
 