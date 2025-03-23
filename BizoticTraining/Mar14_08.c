#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*a,*c;
    scanf("%d",&n);
    a=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);    
    c=(int*)malloc(sizeof(int)*3);

    for(int i=0;i<n;i++)
        if(a[i]==0)
            c[0]++;
        else if(a[i]==1)
            c[1]++;
        else if(a[i]==2)
            c[2]++;
    for(int i=0;i<3;i++)
        for(int j=0;j<c[i];j++)
            printf("%d",i);
    printf("\n");
}