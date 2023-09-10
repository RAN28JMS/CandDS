#include <stdio.h>
#include <conio.h>

void main() {
  int x[10], i, n, j, temp;

  clrscr();
  printf("\n\tEnter the number of elements:");
  scanf("%d", &n);

  printf("\n\tEnter the elements:");
  for (i = 0; i < n; ++i) {
    scanf("%d", &x[i]);
  }

  for (i = 0; i < n; ++i) {
    for (j = 0; j < n; ++j) {
      if (x[j] > x[i]) {
        temp=x[j];
        x[j]=x[i];
        x[i]=temp;
      }
    }
  }

  printf("\n\tThe sorted elements of the give array:\n\t");
  for (i = 0; i < n; ++i) {
    printf("%d\t", x[i]);
  }
}
  
