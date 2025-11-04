#include <stdio.h>

int main() {
    int arr[] = {10, 50, 99, 80, 99, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int found = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 99) {
            found = i;
            break;
        }
    }

    if (found != -1)
        printf("First occurrence of 99 is at index %d\n", found);
    else
        printf("99 not found in the array\n");

    return 0;
}
