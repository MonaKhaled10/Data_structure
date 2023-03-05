//C program to count frequency of each character in a string
#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{

    char str[MAX];
    int  i,j,k,count=0,n;

    printf("Enter  the string : ");
    gets(str);

    for(j=0;str[j];j++);
	 n=j;

	printf(" frequency count character in string:\n");

    for(i=0;i<n;i++)
    {
     	count=1;
    	if(str[i])
    	{

 		  for(j=i+1;j<n;j++)
	      {

	        if(str[i]==str[j])
    	    {
                 count++;
                 str[j]='\0';
	     	}
	      }
	      printf(" '%c' = %d \n",str[i],count);



       }


 	}


    return 0;
}
