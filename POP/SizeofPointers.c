#include <stdio.h>

int main() {
    char c;
    int i;
    float f;
    double d;

    char *ptr_c = &c;
    int *ptr_i = &i;
    float *ptr_f = &f;
    double *ptr_d = &d;

    printf("Size of char: %lu bytes\n", sizeof(*ptr_c));
    printf("Size of int: %lu bytes\n", sizeof(*ptr_i));
    printf("Size of float: %lu bytes\n", sizeof(*ptr_f));
    printf("Size of double: %lu bytes\n", sizeof(*ptr_d));

    return 0;
}
