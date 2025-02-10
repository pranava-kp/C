#include<stdio.h>
int big3(int a,int b,int c);
int big3(int a,int b,int c)
{
    if(a>=b && a>=c)
    return a;
    else if(b>=c && b>=a)
    return b;
    else
    return c;
}
void main()
{
    int p,q,r,big;
    printf("Enter 3 nos\n");
    scanf("%d%d%d",&p,&q,&r);
    big=big3(p,q,r);
    printf("Biggest is %d",big);
}