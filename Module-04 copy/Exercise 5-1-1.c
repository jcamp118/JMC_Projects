#include <stdio.h>

int main(void) {
  int data;
  int *pointer;
  float val;
  float *pntr;

  pointer = &data;
  *pointer = 100;

  pntr = &val;
  *pntr = 3.1416;
  
  printf("Value of data: %d\n", data);
  printf("Value of val: %.4f\n", val);

  return 0;
}