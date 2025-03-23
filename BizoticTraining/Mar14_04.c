#include<stdio.h>
int main()
{
    int v,w,x,y;
    scanf("%d %d",&v,&w);
    y=(w-(2*v))/2;
    x=v-y;
    printf("%d %d",x,y);
    return 0;
}