//Write a C program to print all Armstrong numbers between given interval using functions.
#include <stdio.h>
#include <math.h>
int main(){
    int first, last, temp1, temp2, remainder, i, num = 0, result = 0;

    printf("Enter Lower limit : ");
    scanf("%d", &first);
    printf("Enter upper limit: ");
    scanf("%d", &last);


    for (i = first; i < last; ++i){
        temp1 = i;
        temp2 = i;

        while (temp1 != 0){
            temp1 = temp1 / 10;
            ++num;
        }
        while (temp2 != 0){
            remainder = temp2 % 10;
            result = result + pow(remainder, num);
            temp2 = temp2 / 10;
        }
        if (result == i){
            printf("%d\n", i);
        }
        num = 0;
        result = 0;
    }
    return 0;
}
