#include <stdio.h>

int main(void)
{
  float arr[5];
  float sum = 0;
  float avg = 0;
  float num;

  for (int i = 0; i < 5; i++)
    {
      printf("Please enter a float value: ");
      float val = scanf( "%f", &num);
      arr[i] = num;
    }

  for (int i = 0; i < 5; i++)
    {
      sum += arr[i];
    }

  for (int i = 0; i < 5; i++)
    {
      avg = sum/5;
    }

  printf("Sum: %.2f\n", sum);
  printf("Average: %.2f\n", avg);
}