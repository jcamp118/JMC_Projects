#include <stdio.h>
#include <stdlib.h>

int main()
{
  int grade;
  int num;

  printf("Please enter the numeric grade: ");
  num = scanf("%d", &grade);

  if (grade >= 90 && grade <= 100)
  {
    printf("The letter grade is A.\n");
  } else if (grade >= 80 && grade < 90)
  {
    printf("The letter grade is B.\n");
  } else if (grade >= 70 && grade < 80)
  {
    printf("The letter grade is C.\n");
  } else if (grade >= 60 && grade < 70)
  {
    printf("The letter grade is D.\n");
  } else if (grade < 60)
  {
    printf("The letter grade is F.\n");
  } else
  {
    printf("The letter grade is invalid.\n");
  }
}