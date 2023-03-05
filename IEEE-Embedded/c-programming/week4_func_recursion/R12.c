//C program to print even or odd numbers in given range using recursion
#include <stdio.h>
void EvenAndOdd(int stVal, int n);
 
int main()
{
    int n1,n2;	  
    printf("Input lower limit :\n ");
    scanf("%d", &n1);
     printf("Input upper limit :\n ");
    scanf("%d", &n2);
     
     
    printf("All even numbers from 1 to %d are : ", n2);
    EvenAndOdd(2, n2);//call the function EvenAndOdd for even numbers 
     
    printf(" \nAll odd numbers from 1 to %d are : ", n2);
    EvenAndOdd(1, n2);// call the function EvenAndOdd for odd numbers
 
     
    return 0;
}
void EvenAndOdd(int stVal, int n)
{
    if(stVal > n)
        return;
    printf("%d  ", stVal);
    EvenAndOdd(stVal+2, n);//calling the function EvenAndOdd recursively
}
