#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        sum = sum + i;
        i++;
    } while (i <= n);

    printf("Sum of first %d numbers = %d\n", n, sum);

    return 0;
}