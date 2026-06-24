#include <stdio.h>
#define N 5
int main()
{
    int arr[N];
    int i, j;

    printf("Enter %d Entries: ", N);

    for (i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    for (i = 1; i < N; i++){
        if (arr[i] < min) {
            min = arr[i];
        } 
    }
    printf("The smallest element is %d", min);
    return 0;
}
