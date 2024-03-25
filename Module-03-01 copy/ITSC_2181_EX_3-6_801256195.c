#include <stdio.h>
#include <stdlib.h>

int main()
{
  int input, num;
  int sum = 0;

  while (input != -1)
    {
      printf("Current sum: %d\n", sum);
      printf("Please enter the next number: ");
      num = scanf("%d", &input);
      sum+=input;
    }
  printf("\nDone!\n");
}