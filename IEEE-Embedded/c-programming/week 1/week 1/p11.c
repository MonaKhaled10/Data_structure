#include <stdio.h>
#include <math.h>
int main(){
	double b,e,power;
	printf("Enter base:");
	scanf("%lf",&b);
	printf("Enter exponent:");
	scanf("%lf",&e);
	power=pow(b,e);
	printf("%.2lf^%.2lf=%.2lf" ,b,e,power);
	}