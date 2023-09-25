#include <stdio.h>
#include <conio.h>

void push(void);
void pop(void);
void display(void);

int stack[10], max, opt, item, ele, top = -1, i;

void main() {
  clrscr();

  printf("\n\t Enter the number of elements: ");
  scanf("%d", &max);

  do {
    printf("\n\t Enter the option\n\t1. Push\n\t2. Pop\n\t3. Display\n");
    scanf("%d", &opt);

    switch (opt) {
      case 1:
        push();
        break;
      case 2:
        pop();
        break;
      case 3:
        display();
        break;
      default:
        printf("\n\t Not a valid option.\n");
    }
  } while (opt <= 3 && opt != 0);
}

void push() {
  if (top == max - 1) {
    printf("\n\t Stack is full. No element can be inserted.\n");
    return;
  }
  else {
  printf("\n\t Enter the element to be inserted: ");
  scanf("%d", &ele);

  ++top;
  stack[top] = ele;
  }
  printf("\n\t Push complete.\n");
}

void pop() {
  if (top == -1) {
    printf("\n\t No element in stack.\n");
    return;
  }
  else {
  item = stack[top];
  printf("\n\t The deleted element from stack is %d\n", item);
  --top;
  }
  printf("\n\t Pop completed.\n");
}

void display() {
  if (top == -1) {
    printf("\n\t No element in stack.\n");
    return;
  }

  printf("\n\t Elements in stack:%d\n",ele);
  for (i = 0; i < top; ++i) {
    printf("%d\t", stack[i]);
  }
  printf("\n");
}
  
