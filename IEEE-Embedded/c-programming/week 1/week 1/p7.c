#include <stdio.h>
int main(){
	float lcm,lm,lk;
	printf("Enter length in cm:");
	scanf("%f",&lcm);
	lm=lcm/100;
	lk=lcm/100000;
	printf("Length in meter =%f m \n",lm);
	printf("Length in kilometer = %f km \n",lk);
}