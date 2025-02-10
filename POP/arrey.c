#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter number %d",i+1);
        scanf("%d",a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",n);
    }
    return 0;
}