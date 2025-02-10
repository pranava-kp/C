#include<stdio.h>
void toh(char a, char b, char c, int n)
{
    if(n==0)
        return;
    toh(a,c,b,n-1);
    printf("Move disk %d from %c to %c\n",n,a,c);
    toh(b,a,c,n-1);
}
void main()
{
    int n;
    printf("Enter number of disks\n");
    scanf("%d",&n);
    toh('A','B','C',n);
}