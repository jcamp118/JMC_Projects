#include <stdio.h>

int sum = 0;

int main(void)
{
  int arr[12] = {0};
  arr[0] = 1;
  arr[2] = 3;
  arr[6] = 7;

  for (int i = 0; i < 12; i++)
    {
      printf("%d ", arr[i]);
    }
  printf("\n");

  for (int i = 0; i < 12; i++)
    {
      sum += arr[i];
    }
  printf("Sum: %d\n", sum);

}