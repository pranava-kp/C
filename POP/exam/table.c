#include <stdio.h>


int main() {
    printf("Enter a number\n");
    int n,i;
    scanf("%d",&n);
    printf("Multipliction table of %d\n",n);
    for(i=0;i<=10;i++)
        printf("%d x %d = %d\n",n,i,(n*i));
    return 0;
}