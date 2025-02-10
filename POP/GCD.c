#include<stdio.h>
int main()
{
    int n1,n2,divisor,dividend,rem=1;
    printf("Enter 2 numbers\n");
    scanf("%D%D",&n1,&n2);
    divisor=(n1>n2)?n2:n1;
    dividend=(n1<n2)?n2:n1;
    while(rem!=0)
    {
        rem=dividend%divisor;
        dividend=divisor;
        divisor=rem;
    }
    printf("GCD is %d",dividend);
    return 0;
}