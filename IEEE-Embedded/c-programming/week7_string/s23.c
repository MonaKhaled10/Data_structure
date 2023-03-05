//C program to remove all occurrences of a character from string

#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{

   char str[MAX], ch;
  	int i, len, j;

  	printf("\n Input String :  ");
  	gets(str);

  	printf("\n Input Character to remove :  ");
  	scanf("%c", &ch);

	len = strlen(str);

  	for(i = 0; i < len; i++)
	{
		if(str[i] == ch)
		{
			for(j = i; j < len; j++)
			{
				str[j] = str[j + 1];
			}
			len--;
			i--;
		}
	}
	printf("\n String after removing all '%c' = %s ", ch, str);

  	return 0;
}
