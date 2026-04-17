#include <stdio.h>

int main() {
    int num, original, remainder, result = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    original = num;

    while (original != 0) {
        remainder = original % 10;
        result += remainder * remainder * remainder;
        original /= 10;
    }

    if (result == num)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}