#include<stdio.h>
int main(){
    int i,n;#include <stdio.h>

int main() {
    int n, i;

    // Ask for size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  // array of size n

    // Take input of elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the elements
    printf("Array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

}