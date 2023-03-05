#include<stdio.h>

    int main()
    {

    int an1,an2,an3,sum;
    printf("Input first angle:  ");
    scanf("%d", &an1);
    printf("Input second angle:  ");
    scanf("%d", &an2);
    printf("Input third angle:  ");
    scanf("%d", &an3);
    sum=an1+an2+an3;
  if(sum == 180 && an1 > 0 && an2 > 0 && an3 > 0)
    printf("The triangle is valid");

else
      printf("The triangle is not valid");
    return 0;


}
