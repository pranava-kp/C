#include<stdio.h>
int main()
{
    int m,n,m1,n1,x,y;
    scanf("%d%d%d%d%d%d",&m,&n,&m1,&n1,&x,&y);
    int a,b;
    a=m+m+m1-x;
    b=n+n+n1-y;
    printf("%d %d\n",a,b);
    return 0;
}