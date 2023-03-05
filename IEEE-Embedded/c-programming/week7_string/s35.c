//C program to trim leading white spaces from a string
#include <stdio.h>
#include <string.h>
#define MAX 1000
int main()
{
    char s[MAX];
    int  i,j;

    printf("Input string : ");
    gets(s);

	for(i=0;s[i]==' '||s[i]=='\t';i++);

	for(j=0;s[i];i++)
	{
		s[j++]=s[i];
	}
	s[j]='\0';
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!=' '&& s[i]!='\t')
				j=i;
	}
	s[j+1]='\0';
    printf("\nString after removing leading white spaces: %s",s);
}
