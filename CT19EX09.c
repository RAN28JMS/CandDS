#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
  struct node * left;
  int data;
  struct node * right;
};
void main()
{
    void insert(struct node**,int);
    void inorder(struct node*);
    void postorder(struct node*);
    void preorder(struct node*);
    struct node * ptr;
    int no,i,num;
    ptr=NULL;
   // ptr->data=NULL;
    clrscr();
    printf("\n\tProgram for tree traversal:");
    printf("\n\tEnter the number of node:");
    scanf("%d",&no);
    for(i=0;i<no;i++)
    {
        printf("\n\tEnter item:");
        scanf("%d",&num);
        insert(&ptr,num);
    }
    printf("\n\tInorder Traversal:");
    inorder(ptr);
    printf("\n\tPreorder Traversal:");
    preorder(ptr);
    printf("\n\tPostorder Traversal:");
    postorder(ptr);
    getch();
}

void insert(struct node**p,int num)
{
    if((*p)==NULL)
    {
        printf("\n\tLeft node created");
        (*p)=malloc(sizeof(struct node));
        (*p)->left=NULL;
        (*p)->right=NULL;
        (*p)->data=num;
        return;
    }
    else
    {
        if(num==(*p)->data)
        {
            printf("\n\tRepted entry error:");
            return;
        }
        if(num<(*p)->data)
        {
            printf("direct to left\t");
            insert(&((*p)->left),num);
        }
        else
        {
            printf("direct to right");
            insert(&((*p)->right),num);
        }
    }
    return;
}

void inorder(struct node*p)
{
    if(p!=NULL)
    {
        inorder(p->left);
        printf("\ndata:%d\n", p->data);
        inorder(p->right);
    }
    else
    return;
}

void postorder(struct node*p)
{
    if(p!=NULL)
    {
        postorder(p->left);
        postorder(p->right);
        printf("\ndata:%d\n", p->data);
    }
    else
    return;
}

void preorder(struct node*p)
{
    if(p!=NULL)
    {
        printf("\ndata:%d\n", p->data);
        preorder(p->left);
        preorder(p->right);
    }
    else
    return;
}
    
