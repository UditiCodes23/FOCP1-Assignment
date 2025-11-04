#include <stdio.h>

int main() {
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n == 0) {
        printf("Array is empty\n");
        return 0;
    }
    if (n == 1) {
         printf("Peak element: %d\n", arr[0]);
         return 0;
    }

    for (int i = 0; i < n; i++) {
        int isPeak = 1;
        if (i > 0 && arr[i] < arr[i - 1]) isPeak = 0;
        if (i < n - 1 && arr[i] < arr[i + 1]) isPeak = 0;
        
        if (isPeak) {
            printf("Peak element found: %d\n", arr[i]);
            break; 
        }
    }
    return 0;
}
