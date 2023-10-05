#include <stdio.h>
#include <conio.h>
int power(int x, int y) {
  int z = 1;
  for (int i = 0; i < y; i++) {
    x *= x;
  }
  return z;
}

int main() {
  int a, b, c;
  clrscr();
  printf("Enter a, b: ");
  scanf("%d%d", &a, &b);
  c = power(a, b);
  printf("%d to the power of %d is %d\n", a, b, c);
  return 0;
}
    
