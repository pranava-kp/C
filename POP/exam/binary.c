#include <stdio.h>
int binar(int );


void main() {
    
    int bin,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    bin=binar(n);
    printf("Binary form is %d",bin);

}
int binar(int a )
{
    int v=0,i=1;
    while(a!=0)
    {
        v+=i*(a%2);
        i*=10;
        a/=2;
    }
    return v;
}