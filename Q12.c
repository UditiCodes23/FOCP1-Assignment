#include <stdio.h>

int main() {
    int arr[] = {10, 5, 100, -2, 50, 88};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    if (n == 0) return 1;

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    printf("Minimum score: %d\n", min);
    printf("Maximum score: %d\n", max);

    return 0;
}
