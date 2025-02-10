#include <stdio.h>


void main()
{
    int n,i,j;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
            printf("%d",j+1);
        printf("\n");
    }
}