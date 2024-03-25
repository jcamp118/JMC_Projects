#include <stdio.h>


  void sort(int arr[], int temp)
  {
    int x, pnt, y;
    for (int x = 1; x < temp; x++)
    {
      pnt = arr[x];
      y = x - 1;
      while (y >= 0 && arr[y] > pnt)
        {
          arr[y + 1] = arr[y];
          y = y - 1;
        }
      arr[y + 1] = pnt;
    }
  }

void display(int arr[], int temp)
{
  int x;
  for (x = 0; x < temp; x++)
    {
      printf("%d ", arr[x]);
    }
  printf( "\n");
}

int main(void)
{
  int arr[10];
  int num;

  for (int i = 0; i < 10; i++)
    {
      printf("Please enter an integer: ");
      int val = scanf("%d", &num);
      arr[i] = num;
    }
  int size = sizeof(arr) / sizeof(arr[0]);
  sort(arr,size);
  display(arr,size);

  return 0;
}