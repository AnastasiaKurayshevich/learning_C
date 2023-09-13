/*
Here’s some documentation:
Project Sine
My Name bla bla
13 September 2023
 */

#include<stdio.h>
#include<math.h>

int main(void)
{
 double value, result;
 printf(“Enter value between 0 an 1: ”);
 scanf(“%lf”, &value);

 if (value > 0 && value < 1) { //if statement to check is the input is correct
  result = sin(value);
  printf(“The sine of %lf is %lf”, value, result);
 } else {
 printf(“You entered unexpected value. Please enter the number between 0 and 1 (exclusive)”);
return 0;
}

