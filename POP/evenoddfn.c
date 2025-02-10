#include<stdio.h>
int evenodd(int a);
int main()
{
    int n,r;
    printf("Enter a number\n");
    scanf("%d",&n);
    r=evenodd(n);
    if(r==0)
    printf("Even\n");
    else
    printf("Odd\n");
}
int evenodd(int a)
{
    return a%2;
}