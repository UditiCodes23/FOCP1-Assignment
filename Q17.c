#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos;

    printf("Array before: ");
    printArray(arr, n);

    printf("Enter position to delete (0=front, %d=middle, %d=end): ", (n - 1) / 2, n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position\n");
        return 1;
    }

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("Array after: ");
    printArray(arr, n);
    return 0;
}
