#include<stdio.h>
typedef struct sparse
{
    int r,c,v;
}S;
void accept(S a[10],int m, int n)
{
    printf("Enter the elements\n");
    int i,j,k=1,elem;
    a[0].r=m;
    a[0].c=n;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            scanf("%d",&elem);
            if(elem!=0)
            {
                a[k].r=i;
                a[k].c=j;
                a[k++].v=elem;
            }
        }
    a[0].v=k-1;
}
void display(S a[10])
{
    printf("Elements are \n");
    int r,c,v,i,j,k=1;
    for(i=0;i<a[0].r;i++)
    {
       for(j=0;j<a[0].c;j++)
            if(i==a[k].r && j==a[k].c)
                printf("%d\t",a[k++].v);
            else
                printf("0\t");
        printf("\n");
    }
}
void displays(S a[10])
{ 
    int r,c,v,i,j,k;
    printf("\n\nRow\tColumn\tValue\n"); 
    for(i=0;i<=a[0].v;i++)
        printf("%d\t%d\t%d\n",a[i].r,a[i].c,a[i].v);
}
void transpose(S s[10],S t[10])
{
    int i,j,r,c,v,k=1,l=1;
    t[0].r=s[0].c;
    t[0].c=s[0].r;
    t[0].v=s[0].v;
    for(i=0;i<t[0].r;i++)
        for(j=0;j<t[0].c;j++)
            for(k=1;k<=t[0].v;k++)
                if(i==s[k].c && j==s[k].r)
                {
                    t[l].r=s[k].c;
                    t[l].c=s[k].r;
                    t[l++].v=s[k].v;
                }
}
int main()
{
    S s[10],t[10];
    printf("Enter rows and columns");
    int r,c;
    scanf("%d%d",&r,&c);
    accept(s,r,c);

    printf("\n\n");
    displays(s);
    display(s);

    transpose(s,t);
    
    printf("\n\nTRANSPOSE\n\n");
    displays(t);
    display(t);

    return 0;
}