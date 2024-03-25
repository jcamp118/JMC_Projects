#include <stdio.h>

#define BINARY_LEN 8

void binary(int num, char bin_arr[BINARY_LEN]) {
  for (int i = BINARY_LEN - 2; i >= 0; i--)
    {
      bin_arr[i] = (num & 1) + '0';
      num >>= 1;
    }
  bin_arr[7] = '\0';
}

int main(void) {
  int val1, val2;
  char bin_str1[BINARY_LEN], bin_str2[BINARY_LEN];
  char binAND[BINARY_LEN], binOR[BINARY_LEN], binXOR[BINARY_LEN];

  printf("Please enter the first decimal value: ");
  int dec = scanf("%d", &val1);

  printf("Please enter the second decimal value: ");
  dec = scanf("%d", &val2);

  binary(val1, bin_str1);
  binary(val2, bin_str2);

  printf("Binary string #1: %s\n", bin_str1);
  printf("Binary string #2: %s\n", bin_str2);

  printf("Hexadecimal value #1: %X\n", val1);
  printf("Hexadecimal value #2: %X\n", val2);

  int bitAND = val1 & val2;
  int bitOR = val1 | val2;
  int bitXOR = val1 ^ val2;

  binary(bitAND, binAND);
  binary(bitOR, binOR);
  binary(bitXOR, binXOR);

  printf("Bitwise AND: %s\n", binAND);
  printf("Bitwise OR: %s\n", binOR);
  printf("Bitwise XOR: %s\n", binXOR);

  return 0;
}