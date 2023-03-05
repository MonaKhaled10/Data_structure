#include <stdio.h>
#include <stdlib.h>

// C program to find diameter, circumference and area of circle using function
double diameter(double r);
double Circumference(double r);
double area (double r);
int main()
{double r;
float d,c,a;


printf("input radaius : ");
scanf("%lf",&r);
a=area(r);
c=Circumference(r);
d=diameter(r);
printf(" Diameter:%.2f\n circumference:%.2f\n Area:%.2f\n",d,c,a);

}
double diameter(double r){

return (2*r);
}
double Circumference(double r){
    return (2*3.14*r);
}
double area(double r){
return(3.14*r*r);
}
