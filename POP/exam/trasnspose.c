#include <stdio.h>


void main() {
    int a[3][3],i,j;
    printf("Enter element of matrix");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    printf("transpose of matrix is \n");
    for(i=0;i<3;i++)  
    {
        for(j=0;j<3;j++)
            printf("%d\t",a[j][i]);
        printf("\n");
    }
}