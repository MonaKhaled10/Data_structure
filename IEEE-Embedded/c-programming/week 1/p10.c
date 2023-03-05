#include <stdio.h>
int main(){
	int d,y,w;
	printf("Enter days :");
	scanf("%d",&d);
	y = d / 365;
    w = (d - (y * 365)) / 7;
	d=d - ((y * 365) + (w * 7));
	 printf("YEARS: %d\n", y);
    printf("WEEKS: %d\n", w);
printf("DAYS: %d", d);}