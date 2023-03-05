// C program to find determinant of a matrix

#include<stdio.h>

int main()
{
 	int i, j, rows, columns,x,y,z;
    int det;

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
  	if(i==2&&j==2){
  	 det = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
  	 printf("\n The Determinant of 2 * 2 Matrix = %d", det);
  	 }
  	 else if(i==3&&j==3){
    x = (a[1][1] * a[2][2]) - (a[2][1] * a[1][2]);
    y = (a[1][0] * a[2][2]) - (a[2][0] * a[1][2]);
    z = (a[1][0] * a[2][1]) - (a[2][0] * a[1][1]);

	det = (a[0][0] * x) - (a[0][1] * y) + (a[0][2] * z);
	printf("\n The Determinant of 3 * 3 Matrix = %d", det);
  	 }

}