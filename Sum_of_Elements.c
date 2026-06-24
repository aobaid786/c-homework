#include <stdio.h>
#define N 6

int main()
{
    int arr[N];
    int i, sum = 0;

    printf("Enter %d entries: ", N);
    for(i = 0; i < N; i++) {
      scanf("%d", &arr[i]);
      sum += arr[i];
    }
    printf("The sum is %d", sum);
    return 0;
}
