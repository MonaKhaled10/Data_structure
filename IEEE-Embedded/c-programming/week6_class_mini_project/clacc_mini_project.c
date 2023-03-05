/*mini project 2 about :
a program that allows the user to enter students’ names followed by their test scores.

The program shall output the following (assume that a maximum number of students is 20):

- The average score.
- Names of all the students whose test scores are below the average, with an appropriate warning message.
- Highest test score.
- Name of the top student, with an appreciation message.
date: 10/9/2022 */ 



#include<stdio.h>
#define NOstd 5 ///number of student in class

int main(){
    float degrees[NOstd];
    char names[50][50];
    float sum=0,avg,highest;
    int i;
    //Enter student's name followed by their scores

    for( i=1;i<=NOstd;i++)
  {
      printf("name of student{%d}:",i);
      scanf("%s",&names[i]);

      printf(",degree of her/his test score=");
      scanf("%f",&degrees[i]);}
      printf("\n=================REPORT======================\n");
      printf("Student Name\tScore\n");
      printf("------------\t-----\n");
    // set initial value of the highest score to the 1st array element
   // and then compare 1 by 1 in the for loop...
   
     highest = degrees[1];

     for(i=1;i<=NOstd;i++)
   {
    // print all the student names and their respective scores
     printf("%s\t\t%.2f\n",names[i],degrees[i]);

      //sorting student's scores

       sum+=degrees[i];

       if(highest < degrees[i])
       highest = degrees[i];

   }


         printf("\n================================================\n");
         printf("\nSum of scores for the class=%.2f\n",sum);
         //calculating the average
         avg=sum/NOstd;
         printf("\n================================================\n");
         printf("\nAverage of scores for the class =%.2f\n",avg);


         //Names of all the students whose test scores are below the average, with an appropriate warning message.
         printf("\n================================================\n");
         printf(" Below The Average Students! Work Harder!\n");
         printf("\n================================================\n");
         printf("\nStudent Name\tScore\n");

     for( i=1;i<=NOstd;i++)
     {

      if(degrees[i] < avg)
         printf("%s\t\t%.2f\n", names[i], degrees[i]);
     }


    // Name of the top student, with an appreciation message.
     printf("\n================================================\n");
     printf("Top Scorer Student! Congratulation!\n");
     printf("================================================\n");
     printf("\nStudent Name\tScore\n");
     
    for( i=1;i<=NOstd;i++)
    {
    if(degrees[i] == highest)
    printf("%s\t\t%.2f\n", names[i], degrees[i]);
    }


    return 0;


}
