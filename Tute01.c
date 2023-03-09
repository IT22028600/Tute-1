/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int marks1, marks2, total;
  double average;

  printf("Enter the Marks 1: ");
    scanf("%d", &marks1);

  printf("Enter the Marks 2: ");
    scanf("%d", &marks2);

  total = marks1 + marks2;
  average = total/2;

  printf("Average is : %.2lf ", average);

  return 0;
}

