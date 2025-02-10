//Largest of 3
#include<stdio.h>
int main()
{
    int a,b,c,large;
    a=19,b=27;
    c=19;
    if(a>=b && a>=c)
        large=a;
    else if(b>=c && b>=a)
        large=b;
    else
    large=c;
    printf("%d",large);
    return 0;
}