/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */
#include<stdio.h>
int main()
{
  float mar1,mar2;
  float avg;

  printf("Enter the marks 1:");
  scanf("%f",&mar1);
  printf("enter the marks 2:");
  scanf("%f",&mar2);

  avg=(mar1+mar2)/2;

  printf("average :%.2f",avg);
   return 0;
  
}

