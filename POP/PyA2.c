#include<stdio.h>
int main()
{
    int n1=0,n2=1,n,current;
    printf("\nEnter the number of terms\n");
    scanf("%d",&n);
    printf("\n%d\n%d",n1,n2);
    while(n-2>0)
    {
        current=n1+n2;
        printf("\n%d",current);
        n1=n2;
        n2=current;
        n--;
        
    }
    return 0;

}