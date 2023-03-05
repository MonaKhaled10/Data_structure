//C program to find the first occurrence of a character in a string
#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
   char string[MAX];
   int ch;
   printf("Input a string :");
   gets(string);
      int i;
     int Flag;
      Flag=0;
 printf("\nInput character to search :  ");
  	scanf("%c", &ch);

  	for( i = 0; i <= strlen(string); i++)
  	{
  		if(string[i] == ch)
		{
  			Flag++;
			break;
 		}
	}
    if(Flag == 0)
  	{
  		printf("\n Sorry!! We haven't found the Search Character '%c' ", ch);
	}
	else
	{
		printf("\n '%c' is found at index %d. ", ch, i + 1);
	}
  	return 0;
}
