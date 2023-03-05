//C program to reverse a string

#include <stdio.h>
#define MAX 100
int main()
{
   char s[MAX], r[MAX];
   int begin, end, count = 0;

   printf("Input a string :");
   gets(s);



   while (s[count] != '\0')
      count++;

   end = count - 1;

   for (begin = 0; begin < count; begin++) {
      r[begin] = s[end];
      end--;
   }

   r[begin] = '\0';

   printf("\nreversed :%s ", r);

   return 0;
}
