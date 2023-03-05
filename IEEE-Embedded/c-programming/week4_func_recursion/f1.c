#include <stdio.h>
#include <stdlib.h>

// C program to input any number from user and find cube of the given number using function.
int main()
{int a;
int b;
printf("input any number : ");
scanf("%d",&a);
 b=cube(a);
printf("cube of %d =%d",a,b);
}
int cube(int a){

return (a*a*a);
}

