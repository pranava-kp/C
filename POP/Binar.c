#include <stdio.h>

int main() 
{
    int n, b = 0, base = 1;

    printf("Enter a number\n");
    scanf("%d", &n);

        while (n > 0) {
            b += (n % 2) * base;
            n /= 2; 
            base *= 10;
        }

    printf("Binary value is %d\n", b);

    return 0;
}
