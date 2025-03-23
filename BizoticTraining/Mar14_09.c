#include<stdio.h>
int main()
{
    int n;
    int count=0,ip;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            scanf("%d",&ip);
            if(ip>=18 && ip<=60 && i==j)
                count++;
        }
    printf("%d\n",count);
    return 0;
}