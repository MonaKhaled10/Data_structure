// Recursive C program to check if the number is palindrome or not
#include <stdio.h>

int rev(int n, int res)
{

	if (n == 0)
		return res;

	res = (res* 10) + (n % 10);

	return rev(n / 10, res);
}

int main()
{
    int n;
	printf("Input a number :");
	scanf("%d",&n);
	
	int res= rev(n, 0);

	if (res== n)
	printf("%d is a palindrome ",n);
	else
		printf("%d is not a palindrome ",n);
	return 0;
}