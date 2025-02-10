#include <stdio.h>


int main() {
    
    int n,n1,n2=0;
    printf("Enter no\n");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        n2=(n2*10)+(n%10);
        n/=10;
    }
    printf("%d\t%d",n2,n1);
    return 0;
}