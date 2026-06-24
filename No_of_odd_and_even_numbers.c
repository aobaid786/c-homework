#include <stdio.h>
#define N 20

int main()
{
    int i, odd = 0, even = 0;
    int arr[N];

    for (i = 0; i < N; i++) {
        arr[i] = i + 1;
    }
    for (i = 0; i < N; i++) {
    if (arr[i] % 2 == 0)
        even++;

    else odd++;
    }

    printf("Even Numbers = %d, Odd Numbers = %d", even, odd);

    return 0;
}
