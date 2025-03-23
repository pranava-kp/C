#include<stdio.h>
int main()
{
    int a1,a2,a3,total=0;
    scanf("%d%d%d",&a1,&a2,&a3);
    total=a1+a2+a3;
    if(total==180)
    {
        if((a1==90) || (a2==90)||(a3==90))
            printf("Prize 2");
        else if((a1==60) && (a3==60) && (a2==60))
            printf("Prize 3");
        else
            printf("Prize 1");
    }
    else
        printf("No Prize");
}