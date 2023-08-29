#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node*next;
};
struct node *head=NULL,*p=NULL,*ptr=NULL,*te=NULL,*temp;
void insert(void);
void del(void);
void display(void);
void main()
{
  int cho,op=0;
  clrscr();
  do
    {
      printf("\n\tEnter your choice\n\t1.Insert\n\t2.Delete\n\t3.Display\n\t");
      scanf("%d",&cho);

      switch(cho)
      {
	case 1:
	       insert();
	       break;
	case 2:
	       del();
	       break;
	case 3:
	       display();
	       break;
      }
      printf("\n\tTo continue type 1\t");
      scanf("%d",&op);
    }while(op==1);
}

void insert(void)
{
  int n,opt,pos,c=0,i;
  printf("\nEnter\n\t1 at Starting\n\t2 at Middle\n\t3 at End\n\t");
  scanf("%d",&opt);
  if(opt==1)
  {
    printf("\nEnter the element:\t");
    scanf("%d",&n);
    p=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
      p->data=n;
      p->next=NULL;
      head=p;
    }
    else
    {
      p->data=n;
      p->next=head;
      head=p;
    }
  }
  else if(opt==2)
  {
    printf("\nEnter element:\t");
    scanf("%d",&n);
    p=(struct node*)malloc(sizeof(struct node));
    p->data=n;
    c=0;
        if(head==NULL)
        {
          printf("No node");
        }
        else
        {
          ++c;temp=head;te=head;
          while(temp->next!=NULL)
          {
            te=temp;
            temp=temp->next;
            ++c;
            if(c==pos)
            break;
          }
          p->next=te->next;
          te->next=p;
        }
  }
  else
  {
    printf("\nEnter element:");
    scanf("%d",&n);
    p=(struct node*)malloc(sizeof(struct node));
    p->data=n;
    p->next=NULL;
    if(head==NULL)
    {
      printf("No node");
    }
    else
    {
      temp=head;
      while(temp->next!=NULL)
      {
        temp=temp->next;
      }
      temp->next=p;
      p->next=NULL;
    }
  }
}

void display(void)
{
  int c=0;
  temp=head;
  if(temp==NULL)
  {
    printf("empty list");
  }
  else
  {
    while(temp->next!=NULL)
    {
      c++;
      temp=temp->next;
    }
  }
  ++c;
  temp=head;
  while(c>0)
  {
    printf("%d\t",temp->data);
    temp=temp->next;
    --c;
  }
}

void del(void)
{
  int opt,i,pos,c=0;
  printf("\nEnter \n\t1 at Starting\n\t2 at Middle\n\t3 at End\n\t");
  scanf("%d",&opt);
  if(opt==1)
  {
    if(head==NULL)
    {
      printf("no node");
    }
    else
    {
      head=head->next;
    }
  }
  else if(opt==2)
  {
    printf("\nEnter the position:");
    scanf("%d",&pos);
    ptr=head;
    c=0;
    if(head==NULL)
    {
      printf("no node");
    }
    else
    {
      c++;temp=head;te=head;
      while(temp->next!=NULL)
      {
        te=temp;
        temp=temp->next;
        c++;
        if(c==pos)
        break;
      }
      te->next=temp->next;
    }
  }
  else
  {
    if(head==NULL)
    {
      printf("no node");
    }
    else
    {
      ptr=head;
      while(ptr->next!=NULL)
      {
        temp=ptr;
        ptr=ptr->next;
      }
      temp->next=NULL;
    }
  }
}
