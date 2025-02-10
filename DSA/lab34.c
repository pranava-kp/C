#include<stdio.h>
void toh(char a, char b, char c, int n)
{
    if(n==0)
        return;
    toh(a,c,b,n-1);
    printf("%d %c %c\n",n,a,c);
    toh(b,a,c,n-1);
}
void main()
{
    toh('A','B','C',4);
}