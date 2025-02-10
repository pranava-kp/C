#include <stdio.h>
int main()
{
    printf("Enter the number of rows\n");
    int n,i,j,k,l;
    scanf("%d",&n);
    for( i=0;i<n;i++)
    {
        for( j=0;j<n-i;j++)
        printf("  ");
        for( k=0;k<=i;k++)
        printf("%d ",k+1);
        for( l=k-1;l>0;l--)
        printf("%d ",l);
    printf("\n");
    }
    return 0;
}