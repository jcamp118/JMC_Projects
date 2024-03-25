#include <stdio.h>
#include <stdlib.h>

int main()
{
char a, b;
float fl = 0.0;
int num = 0;
int result = 0;
  printf("Enter two characters, a space, a float, a space, and a decimal: ");
  result = scanf("%c %c %f %d", &a, &b, &fl, &num);

  if (result != 4) {
    exit(1);
  }
  printf("%c%c\n", a, b);
  printf( "%f\n", fl);
  printf( "%d\n", num);
}