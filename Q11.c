#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int even_array[n], odd_array[n];
    int even_count = 0, odd_count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_array[even_count++] = arr[i];
        } else {
            odd_array[odd_count++] = arr[i];
        }
    }

    printf("Even array: ");
    for (int i = 0; i < even_count; i++) printf("%d ", even_array[i]);
    printf("\n");

    printf("Odd array: ");
    for (int i = 0; i < odd_count; i++) printf("%d ", odd_array[i]);
    printf("\n");

    return 0;
}
