#include <stdio.h>


void main() {
    
    int n,res=0,og;
    printf("Enter a number\n");
    scanf("%d",&n);
    og=n;
    while(n>=1)
    {
        res+=n;
        n--;

    }
    printf("sum of %d number is %d",og,res);

}