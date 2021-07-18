/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int markSub1,markSub2,sum;
  float ave;

  printf("Enter 1st subject mark :");
  scanf("%d",&markSub1);

  printf("Enter 2nd subject mark :");
  scanf("%d",&markSub2);
  
  sum=markSub1+markSub2;
  ave=sum/2.0;

  printf("Average is :%.2f",ave);
  
  return 0;
}

