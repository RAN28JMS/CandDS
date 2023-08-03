#include<stdio.h>
#include<conio.h>
struct student
{
    int regno;
    char sname[20];
    int mark[10];
    int total;
};
void main()
{
    struct student s[3];
    int i,j,n;
    clrscr();
    printf("\n\tEnter the number of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n\tEnter the Regno,Name,Mark1 to Mark3:");
        scanf("%d%s",&s[i].regno,&s[i].sname);
        s[i].total=0;
        for(j=0;j<3;j++)
        {
            scanf("%d",&s[i].mark[j]);
            s[i].total+=s[i].mark[j];
        }
    }
    printf("\nReg no\tStudent Name\tM1\tM2\tM3\tTotal Mark");
    for(i=0;i<n;i++)
    {
        printf("\n%d\t%s",s[i].regno,s[i].sname);
        for(j=0;j<3;j++)
        {
         printf("\t%d",s[i].mark[j]);
        }
        printf("\t%d",s[i].total);
    }
}
