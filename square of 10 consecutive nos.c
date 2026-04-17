#include <stdio.h>
int main() {
    int start, count,i;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("enter how many consecutive numbers : \n");
    scanf("%d", &count);


    for(i = 0; i < count; i++) {
        int num = start + i;
        printf("Square of %d = %d\n", num, num * num);
    }

    return 0;
}