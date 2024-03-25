#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num = 0;

  printf("Printing the first 20 even numbers:\n");
  for (int i = 0; i < 20; i++)
    {
      printf("%d\n", num);
      num+=2;
    }

  printf("\nPrinting odd numbers between 50 and 20:\n");
  for (int i = 50; i >= 20; i--)
    {
      if (i % 2 != 0)
      {
        printf("%d\n", i);
      }
    }
}