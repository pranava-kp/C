#include <stdio.h>
int main()
{
    int decimal_num, remainder, binary_num = 0;
    int i = 1;

    printf("\nEnter a number\n");
    scanf("%d", &decimal_num);

    while (decimal_num != 0) {
        remainder = decimal_num % 2;
        binary_num += remainder * i;
        decimal_num /= 2;
        i *= 10;
    }

    printf("Binary equivalent is %d", binary_num);
    return 0;
}
