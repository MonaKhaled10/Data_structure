#include <stdio.h>
int main(){
	float c,f;
	printf("Temperature in fahrenheit  =");
	scanf("%f",&f);
	c=(f -32) *5/9;
	printf("Temperature in celsius = %f C",c);
}