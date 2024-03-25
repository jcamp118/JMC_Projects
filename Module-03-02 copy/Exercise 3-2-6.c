#include <stdio.h>
#include <string.h>

int main(void)
{
  char arr[] = "UNC Charlotte";

  for (int i = 0; i < strlen(arr); i++)
    {
      printf("%c\n", arr[i]);
    }
}