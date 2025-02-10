#include<stdio.h>
int main()
{
    int c[20],n,m,ind=0,x,i;
    int ind1=0,ind2=0;
    int a[6]={1,2,3,4,15,69};
    int b[7]={1,2,37,56,69,174,8008135};
    n=6;
    m=7;
    if(n>=m)
    {
        for(i=0;i<n;i++)
        c[i]=a[i];
        for(i=n;i<n+m;i++)
            c[i]=b[i-n];
    }
    else
    {
        for(i=0;i<m;i++)
            c[i]=b[i];
        for(i=m;i<n+m;i++)
            c[i]=a[i-m];
    }    
    printf("New array is \n[");
    for(i=0;i<n+m;i++)
    {
        printf("%d,",c[i]);
    }
    printf("\b]");
    return 0;
}

