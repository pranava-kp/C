#include <stdio.h>


void main() {
    int n,first=0,second=1,new;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("%d\n%d\n",first,second);
    while(n-2>0)
    {
        new=first+second;
        printf("%d\n",new);
        n--;
        first=second;
        second=new;
    }
}