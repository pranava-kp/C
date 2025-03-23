#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,ip;
    scanf("%d",&n);
    int *a=malloc(sizeof(int)*n);
    int *c=malloc(sizeof(int)*26);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ip);
        c[ip]++;
    }
    for(int i=0;i<26;i++)
        if(c[i]>0)
            printf("%d %d\n",i,c[i]);
    printf("\n");
    return 0;
}