#include <stdio.h>
#include <string.h>

#define FIRST_LENGTH 20
#define MIDDLE_LENGTH 20
#define LAST_LENGTH 20
#define PHONE_NUMBER_LENGTH 20

struct customer {
char first[FIRST_LENGTH], middle[MIDDLE_LENGTH], last[LAST_LENGTH], phone[PHONE_NUMBER_LENGTH];
float balance;
};


void show_customer(struct customer cust)
{
  (void) printf("Customer: %s %s %s", cust.first, cust.middle, cust.last);
  (void) printf("\nPhone Number: %s, Balance: $%.2f\n", cust.phone, cust.balance);
}

void show_database(struct customer cust_db[], int size)
{
  printf("Customer List: \n");
  printf("----------\n");
  for (int i = 0; i < size; i++) 
  {
    show_customer(cust_db[i]);
    printf("\n");
    printf("----------\n");
  }
}

int main(void)
{
  struct customer customers[20];

  int x = 0;
  char input[20];

  while (1 && x < 20)
    {
      printf("Please enter the next customer record.\n");
      printf(":X   Exits the program.\n:S   Shows the contents of the database.\n");

      printf("First Name: ");
      printf("\033[1m");
      char ret = scanf("%s", customers[x].first);
      printf("\033[0m");
      if (strcasecmp(customers[x].first, ":X") == 0) {
        printf("Good bye!\n");
        break;
      } else if (strcasecmp(customers[x].first, ":S") == 0) {
        show_database(customers, x);
        continue;
      }

      printf("Middle Name: ");
      printf("\033[1m");
      ret = scanf("%s", customers[x].middle);
      printf("\033[0m");

      printf("Last Name: ");
      printf("\033[1m");
      ret = scanf("%s", customers[x].last);
      printf("\033[0m");

      printf("Phone Number: ");
      printf("\033[1m");
      ret = scanf("%s", customers[x].phone);
      printf("\033[0m");

      printf("Balance Due: ");
      printf("\033[1m");
      float out = scanf("%f", &customers[x].balance);
      printf("\033[0m");

      x++;
    }
  return 0;
}