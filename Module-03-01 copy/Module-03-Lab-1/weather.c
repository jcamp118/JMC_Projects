#include <stdio.h>
#include <stdlib.h>

int main() {
  int temperature, temp;
  int max = 0;
  int day = 1;
  printf("You will be asked to enter the daily high temperature for 10 consecutive days.\n");
  for (int i = 1; i <= 10; i++) {
    printf("Enter a high temperature: ");
    temp = scanf("%d", &temperature);
    if (temperature >= max) {
      max = temperature;
      day = i;
    }
  }
  printf("The highest recorded temperature in the 10-day period was: %d degrees\n", max);
  printf("Last recorded on: Day %d\n", day);
}