// C program to interchange diagonals of a matrix

#include<stdio.h>

int main()
{
 	int i, j, rows, columns;;
    int temp;

 	printf("Enter Number of rows and columns  :  ");
 	scanf("%d %d", &i, &j);
 	int a[i][j];
 	printf("\nEnter the  Matrix Elements\n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}
        if(rows==columns){
        for(rows = 0; rows < i; rows++){
  	temp=a[rows][rows];
  	a[rows][rows]=a[rows][i-rows-1];
  	a[rows][i-rows-1]=temp;
         }
  	printf("Matrix after interchanging its diagonal:");
  	
  	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		printf("%d ", a[rows][columns]);
    	}
    	printf("\n");
  	}
        }
      else{
      printf("\n The Matrix that you entered is Not a Square matrix" );
        }

         }
