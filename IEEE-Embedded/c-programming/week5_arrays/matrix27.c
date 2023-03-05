// C program to check whether two matrices are equal or not

#include<stdio.h>

int main()
{
 	int i, j, rows, columns;;
    int flag;

 	printf("Enter Number of rows and columns  :  ");
 	scanf("%d %d", &i, &j);
 	int a[i][j],b[i][j];
 	int Subtraction[i][j];
 	printf("\nEnter the First Matrix Elements\n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}

 	printf("\nEnter the Second Matrix Elements\n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &b[rows][columns]);
    	}
  	}
  	flag=1;
  	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++){
         if(a[i][j]!=b[i][j]){
         flag=0;
         break;
}
}
if(flag == 1)
    {
        printf("\nThey are equal");
    }
    else
    {
        printf("\nThey are not equal");
    }

    return 0;

}}
