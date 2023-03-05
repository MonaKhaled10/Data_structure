//C program to find first occurrence of a word in a string
#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
  	char str[MAX], word[MAX];
  	int i, j, Flag;

  	printf("\n Please Enter any String :  ");
  	gets(str);

	printf("\n Input word to search :  ");
  	gets(word);

  	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == word[0])
		{
			Flag = 1;
			for(j = 0; word[j] != '\0'; j++)
			{
				if(str[i + j] != word[j])
				{
					Flag = 0;
					break;
				}
			}
		}
		if(Flag == 1)
		{
			break;
		}
	}
	if(Flag == 0)
  	{
  		printf("\n Sorry!! We haven't found the Word '%s' ", word);
	}
	else
	{
		printf("\n  '%s' is found at index %d ", word, i + 1);
	}

  	return 0;
}
