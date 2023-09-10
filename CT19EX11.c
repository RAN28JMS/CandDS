#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,search,low,mid,high,n;
    clrscr();
    printf("\n\tEnter the number of element:");
    scanf("%d",&n);
    printf("\n\tEnter the element one by one:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n\tEnter the search element:");
    scanf("%d",&search);
    low=1;
    high=n;
    mid=(low+high)/2;
    while(low<=high)
    {
        if(search<a[mid])
        {
            high=mid-1;
        }
        else if(search>a[mid])
        {
            low=mid+1;
        }
        else
        {
            printf("\n\t%d found at location %d", search,mid);
            break;
        }
        mid=(low+high)/2; 
    }
    if(low>high)
    printf("\n\tnot found");
}
