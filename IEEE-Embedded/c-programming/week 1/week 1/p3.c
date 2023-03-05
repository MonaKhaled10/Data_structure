#include <stdio.h>
int main(){
	int num1,num2;
	int Sum,Difference,Product,Modulus;
	float Qutionet; 
	printf("First number: ");
    scanf("%d",&num1);
    printf("Second number: ");
    scanf("%d",&num2);
	Sum=num1+num2;
	Difference=num1-num2;
	Product=num1*num2;
	Qutionet=num1/num2;
	Modulus=num1%num2;
	printf("Sum=%d\n",Sum);
   	printf("Difference=%d\n",Difference);
	printf("Product=%d\n",Product);
	printf("Modulus=%d\n",Modulus);
	printf("Qutionet=%f\n",Qutionet);

	
	} 