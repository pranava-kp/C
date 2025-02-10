#include<stdio.h>
int main()
{
    int c[20],n,m,ind=0,x;
    int ind1=0,ind2=0;
    int a[6]={1,2,3,4,15,69};
    int b[7]={1,2,37,56,69,174,8008135};
    n=6;
    m=7;
    x=n+m;
    while(ind1<n&&ind2<m)
    {
        if(a[ind1]<b[ind2])
        {
            c[ind]=a[ind1];
            ind1++;
        }
        else
        {
            c[ind]=b[ind2];
            ind2++;
        }
        ind++;
    }
    if(ind1==n)
    {
        while(ind2<m)
        {
            c[ind]=b[ind2];
            ind2++;
            ind++;
        }
    }
    else
    {
        while(ind1<n)
        {
            c[ind]=a[ind1];
            ind1++;
            ind++;
        }
    }
    printf("New matrix is \n[");
    for(int i=0;i<x;i++)
    {
        printf("%d,",c[i]);
    }
    printf("\b]");
    return 0;
}