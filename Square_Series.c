#include <stdio.h>
int main()
{
    int i;
    int n;

    printf("Enter a Number: ");
    scanf("%d", &n);

    for (i = 0; i < 4; i++){
        n = n * n;
        printf("%d  ", n);
    }
    return 0;
}
