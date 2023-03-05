#include<stdio.h>
int main(){
	float r,d,c,a;
	 printf("Enter radius o: ");
    scanf("%f", &r);
	d = 2 * r;
    c = 2 * 3.14 * r;
    a = 3.14 * (r * r);
	printf("Diameter = %f units\n",d);
	printf("circumference = %f units\n",c);
	printf("Area = %f sq.units",a);
	
}