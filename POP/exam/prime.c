#include <stdio.h>
void prime(int);


void main() {
    int n;
    printf("Enter  a number\n");
    scanf("%d",&n);
    prime(n);

}
void prime(int a)
{
    int i,res=-1;
    for(i=2;i<a;i++)
        if(a%i==0)
        {
        res=0;
        break;
        }
        
    if(res==0)
        printf("NUmber is composite");
    else
    printf("Number is prime");

        
}