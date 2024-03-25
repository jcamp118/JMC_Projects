#include <stdio.h>
#include <stdlib.h>

int main() {
  float radius, height;
  float rad, hght;
  float pi = 3.14159;
  float volume;

  printf("Enter radius: ");
  rad = scanf("%f", &radius);
  printf( "Enter height: ");
  hght = scanf("%f", &height);

  volume = pi * radius * radius * height;

  printf("Volume: %.2f\n", volume);
}