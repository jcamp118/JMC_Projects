#include <stdio.h>
#include <stdlib.h>


int main() {
  int a = 32; 
  int b = 5; 
  int c = 8; 
  int d = 4;
  int e = 12;

    if (b > c) {
        printf("1. True\n");
    } else {
        printf("1. False\n");
    }

    if ((e / d) + 6) {
        printf("2. True\n");
    } else {
        printf("2. False\n");
    }

    if (a -= ((b > c) || (e / d)) + 6) {
        printf("3. True\n");
        printf("The value of a is: %d\n", a);
    } else {
        printf("3. False\n");
    }

    return 0;
}