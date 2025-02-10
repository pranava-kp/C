#include<stdio.h>
int main()
{
    int n,large=0,i=0;
    while(i<6)
    {
        printf("Enter number %d\n",i+1);
        scanf("%d",&n);
        large=(n>large)?n:large;
        i++;
    }
    printf("Largest is %d\n",large);
    return 0;
}