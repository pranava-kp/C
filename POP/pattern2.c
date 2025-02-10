#include <stdio.h>


int main() {
    printf("Enter the number of rows\n");
    int n,i,j,k,l;
    scanf("%d",&n);
    for( i=n;i>0;i--)
    {   
        for( j=n-i;j>0;j--)
        printf("  ");
        for( k=i;k>0;k--)
        printf("%d ",k);
        for( l=k+2;l<=i;l++)
        printf("%d ",l);
    printf("\n");
    }
    return 0;
}