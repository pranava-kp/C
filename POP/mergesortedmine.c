#include<stdio.h>
int main()
{
    int c[20],n,m,i;
    int ind1=0,ind2=0;
    int a[7]={1,2,37,56,69,174,8008135};
    int b[6]={1,2,3,4,15,69};
    n=7;
    m=6;
    for(i=0;i<m+n;i++)
    {
        if (ind1 < n && ind2 < m)
        {
            if(a[ind1]<=b[ind2])
                c[i]=a[ind1++];
            else
                c[i]=b[ind2++];
        }
        else if (ind1 < n)
        {
            c[i] = a[ind1++];
        }
        else
        {
            c[i] = b[ind2++];
        }
    }
    printf("New array is \n[");
    for(i=0;i<n+m;i++)
    {
        printf("%d,",c[i]);
    }
    printf("\b]");
    return 0;
}