#include<stdio.h>
int main()
{
    int tix;
    scanf("%d",&tix);
    if((tix%10 == 8) || (tix%10==3))
        printf("Lucky Winner\n");
    else
        printf("Not a Lucky Winner\n");
}