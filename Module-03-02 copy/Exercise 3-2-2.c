#include <stdio.h>

float cube_volume(float);
float num;

int main(void)
{
  printf("Enter a float value: ");
  float val = scanf("%f", &num);
  printf("Volume: %f\n", cube_volume(num));
}

float cube_volume(float edge)
{
  return edge*edge*edge;
}