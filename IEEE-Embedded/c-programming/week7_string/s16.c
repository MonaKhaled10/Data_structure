//C program to search all occurrences of a character in a string
#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{
  	char str[MAX], ch;
  	int i;

  	printf("\n Please Enter any String :  ");
  	gets(str);

  	printf("\nInput character to search: :  ");
  	scanf("%c", &ch);

  	for(i = 0; i <= strlen(str); i++)
  	{
  		if(str[i] == ch)
		{
  			printf("\n '%c' is Found at index %d ", ch, i + 1);
 		}
	}

  	return 0;
}
