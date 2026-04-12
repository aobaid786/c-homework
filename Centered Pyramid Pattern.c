#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {

        // Print spaces (left side)
        for(space = 1; space <= n - i; space++) {
            printf(" ");
        }

        // Print stars (both sides combined)
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}