#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the starting value (m): ");
    scanf("%d", &m);

    printf("Enter the ending value (n): ");
    scanf("%d", &n);

    printf("Even numbers from %d to %d are: ", m, n);

    int *ptr;

    for (int i = m; i <= n; i++) {
        ptr = &i; // Point to the current number
        if (*ptr % 2 == 0) {
            printf("%d ", *ptr);
        }
    }

    return 0;
}
