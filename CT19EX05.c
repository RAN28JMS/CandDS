#include <stdio.h>

void main() {
  char str[100];
  char *ptr = str;
  int Length = 0;

  printf("Enter a string: ");
  gets(str);

  while (*ptr != '\0') {
    Length++;
    ptr++;
  }

  printf("Length of the string = %d\n", Length);
}
