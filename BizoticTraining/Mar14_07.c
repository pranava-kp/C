#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*E,*L,sum,max;
    scanf("%d",&n);
    E=(int*)malloc(sizeof(int)*n);
    L=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",&E[i]);
    for(int i=0;i<n;i++)
        scanf("%d",&L[i]);
    for(int i=0;i<n;i++)
    {
        sum=sum+E[i]-L[i];
        max=(sum>max)?sum:max;
    }
    printf("%d\n",max);
}