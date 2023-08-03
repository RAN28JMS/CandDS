#include<stdio.h>
#include<conio.h>
void main()
{
    int n,fact=1,i;
    clrscr();
    printf("\n Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;}
printf("\n\t Factorial of %d is %d",n,fact);
getch();
