#include <stdio.h>


void main() {
    
    printf("Enter a number\n");
    int n1,n2=0,original;
    scanf("%d",&n1);
    original=n1;
    while(n1>0)
    {
        int rem=n1%10;
        n2=(n2*10)+rem;
        n1/=10;

    }
    printf("%d\t%d",n2,original);
    if(n2==original)
        printf("Pali");
    else
    printf("not");
}