#include <stdio.h>
int fact(int);


void main() {
    
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int res=fact(n);
    printf("Factorial is %d",res);
}
int fact(int a)
{
    if(a<=1)
    {
        return 1;
    }
    else
    return a*fact(a-1);
}