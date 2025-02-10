#include<stdio.h>
void main()
{
    int A[4][4]={{}};
    int B[4][4]={{}};
    int C[4][4]={{}};
    int a,b,c,d,i,j,k;
    printf("Enter the size of array A\n");
    scanf("%d%d",&a,&b);
    printf("Enter elements for array A\n");
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        scanf("%d",&A[i-1][j-1]);
    }
    printf("Enter the size of array B\n");
    scanf("%d%d",&c,&d);
    printf("Enter elements for array B\n");
    for(i=1;i<=c;i++)
    {
        for(j=1;j<=d;j++)
        scanf("%d",&B[i-1][j-1]);
    }
    if(b==c)
    {
        for(i=0;i<a;i++)
            for(j=0;j<d;j++)
                for(k=0;k<b;k++)
                    C[i][j]+=A[i][k]*B[k][j];
                        //Matrix Multiplication formula
        for(i=0;i<a;i++)
        {
        for(j=0;j<d;j++)
            printf("%d ",C[i][j]);
        printf("\n");
        }
    }
    else
    printf("Matrix multiplication not possible");
    
    
}