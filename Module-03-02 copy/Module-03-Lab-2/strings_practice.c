#include <stdio.h>
#include <string.h>
#include <ctype.h>


void capitalize(char letter[])
{
  for (int i = 0; i < strlen(letter); i++)
    {
      if (isalpha(letter[i]))
      {
        letter[i] = toupper(letter[i]);
      }
    }
}

int main(void)
{
  char the_str[] = "test";

  capitalize(the_str);
  printf("%s\n", the_str);

  char the_str2[] = "This IS a tesT!";

  capitalize(the_str2);
  printf("%s\n", the_str2);

  char the_str3[] = "LEt's tRY a nEw ThiNg?";

  capitalize(the_str3);
  printf("%s\n", the_str3);

  char the_str4[] = "HEY this thing iS ACTually WOrking.";

  capitalize(the_str4);
  printf("%s\n", the_str4);

  char the_str5[] = "I'm TirED oF THis GranDPA!";

  capitalize(the_str5);
  printf("%s\n", the_str5);
}