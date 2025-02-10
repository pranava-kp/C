#include <stdio.h>

int main() {
    int decimal_num, rem, binary_num = 0, place = 1;

    printf("Enter a number\n");
    scanf("%d", &decimal_num);

    while (decimal_num != 0) {
        binary_num += decimal_num % 2 * place;
        place *= 10;
        decimal_num /= 2;
    }

    printf("Binary value is %d\n", binary_num);

    return 0;
}
