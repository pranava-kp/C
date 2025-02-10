#include <stdio.h>
int fibo(int);

void main() {
    int n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    printf("%d\n",fibo(i));
}
int fibo(int a)
{
    if(a==1 || a== 0)
        return("%d\n",a);
    else
        return(fibo(a-1)+fibo(a-2));
}