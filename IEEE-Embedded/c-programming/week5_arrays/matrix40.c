//C program to check symmetric matrix
#include<stdio.h>

int main()
{
    int i, j, rows, columns, Count = 1;

    printf("Enter Number of rows and columns  :  ");
    scanf("%d %d", &i, &j);
     int a[i][j], b[i][j];
    printf("\nEnter the Matrix Elements \n");
    for(rows = 0; rows < i; rows++)
    {
        for(columns = 0;columns < j;columns++)
        {
            scanf("%d", &a[rows][columns]);
        }
    }

    for(rows = 0; rows < i; rows++)
    {
        for(columns = 0;columns < j; columns++)
        {
            b[columns][rows] = a[rows][columns];
        }
    }

    for(rows = 0; rows < i; rows++)
    {
        for(columns = 0; columns < j; columns++)
        {
            if(a[rows][columns] != b[rows][columns])
            {
                Count++;
                break;
            }
        }
    }
    if(Count == 1)
    {
        printf("\n The Matrix is Symmetric  ");
    }
    else
    {
        printf("\n The Matrix is Not Symmetric ");
    }

    return 0;}
