#include<stdio.h>
#include<math.h>
int main(){
	float s1,s2,s3,s4,s5;
	float sum,avg,per;
	printf("Enter marks of five sujects:");
	fflush(stdout);
	  scanf("%f%f%f%f%f", &s1, &s2, &s3, &s4, &s5);
	sum =s1+s2+s3+s4+s5;
	avg=sum/5;
	per=(sum/500)*100;
	printf("Total marks = %.2f\n", sum);
    printf("Average marks = %.2f\n", avg);
    printf("Percentage = %.2f", per);

}