#include<stdio.h>
#include<conio.h>
void main()
{
    float P,N,R, simple, compound;
    clrscr();
    printf("\n Enter principal amount:");
    scanf("%f",&P);
    printf("\n Enter number of years:");
    scanf("%f",&N);
    printf("\n Enter rate of interest:");
    scanf("%f",&R);
    simple = P*N*R/100;
    compound = P*pow(1+R/100,N)-P;
    printf("\n Simple interest = RS%6.2f", simple);
    printf("\n Compound interest = RS%6.2f", compound);
    getchar();
}
