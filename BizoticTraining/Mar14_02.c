#include<stdio.h>
int main()
{
    int c=0,rem,change;
    scanf("%d",&change);
    c+=change/100;
    change=change%100;
    c+=change/50;
    change=change%50;
    c+=change/10;
    change=change%10;
    c+=change/5;
    change=change%5;
    c+=change/2;
    change=change%2;
    c+=change;
    printf("%d\n",c);
    return 0;
}