//C program to find factorial of a number using recursion
#include <stdio.h>

int main()
{
    int n;
    int fact2;
    
    printf("Enter any number: ");
    scanf("%d", &n);
    
    fact2 = fact(n); 
    
    printf("Factorial of %d is %d", n, fact2);
    
    return 0;
}


int fact(int n)
{
    if(n== 0) 
        return 1;
    else
        return n * fact(n - 1);
}
