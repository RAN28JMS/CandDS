#include <stdio.h>
#include <conio.h>

void insert(void);
void delete(void);
void display(void);

int queue[10], opt,max, rear = -1, front = -1, i, ele, item;

void main()
{
  clrscr();
  printf("\n\tEnter the number of elements: ");
  scanf("%d", &max);

  do
  {
    printf("\n\tSelect an option: ");
    printf("\n\t1. Insert");
    printf("\n\t2. Delete");
    printf("\n\t3. Display\n");
    scanf("\n%d", &opt);

    switch (opt)
    {
    case 1:
      insert();
      break;
    case 2:
      delete();
      break;
    case 3:
      display();
      break;
    default:
      printf("\n\tNot a valid option");
      break;
    }
  } while (opt <= 3 && opt != 0);

  getch();
}

void insert()
{
  if (rear == -1)
  {
    printf("\n\tEnter the element to be inserted: ");
    scanf("%d", &ele);
    queue[++rear] = ele;
  }
  else if (rear == max - 1)
  {
    printf("\n\tQueue is full");
  }
  else
  {
    printf("\n\tEnter the element to be inserted: ");
    scanf("%d", &ele);
    queue[++rear] = ele;
  }
  printf("\n\tInsertion completed");
}

void delete()
{
  if (front == -1 && rear == -1)
  {
    printf("\n\tNo element in queue");
  }
  else if (front == max)
  {
    printf("\n\tAll the elements are deleted");
  }
  else
  {
    item = queue[++front];
    queue[front]=0;
    printf("\n\tThe deleted element from queue is %d", item);
    
  }
  printf("\n\tDeletion completed");
}

void display()
{
  if (rear == -1)
  {
    printf("\n\tNo element in queue");
  }
  else
  {
    printf("\n\tElements in queue are: ");
    for (i = 0; i <= rear; ++i)
    {
      printf("%d\t", queue[i]);
    }
  }
