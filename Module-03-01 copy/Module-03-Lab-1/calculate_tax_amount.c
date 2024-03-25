#include <stdio.h>
#include <stdlib.h>

int main() {
  int income, dependents, inc, dep;
  float taxdue, tax, adjusted;
  int credit = 450;

  printf("Please enter your income: ");
  inc = scanf("%d", &income);

  if (income > 0 && income < 9275) {
    tax = 0.12;
    taxdue = tax * income;
    printf("Tax due: $%.2f\n", taxdue);
  } else if (income >= 9275 && income < 37650)  {
    tax = 0.17;
    taxdue = tax * income;
    printf("Tax due: $%.2f\n", taxdue);
  } else if (income >= 37650 && income < 91150) {
    tax = 0.27;
    taxdue = tax * income;
    printf("Tax due: $%.2f\n", taxdue);
  } else if (income >= 91150 && income < 190150) {
    tax = 0.30;
    taxdue = tax * income;
    printf("Tax due: $%.2f\n", taxdue);
  } else if (income >= 190150) {
    tax = 0.35;
    taxdue = tax * income;
    printf("Tax due: $%.2f\n", taxdue);
  } else {
    printf("Invalid income.");
  }

  printf("Please enter the number of dependents (0 for none): ");
  dep = scanf("%d", &dependents);

  if (dependents >= 0 && dependents < 5) {
    credit = credit * dependents;
    printf("Tax credit: $%d\n", credit);
    adjusted = taxdue - credit;
    printf("Adjusted tax: $%.2f\n", adjusted);
  } else if (dependents >= 5) {
    credit = credit * 5;
    printf("Tax credit: $%d\n", credit);
    adjusted = taxdue - credit;
    printf("Adjusted tax: $%.2f\n", adjusted);
  } else {
    printf("Invalid number of dependents.\n");
  }
}