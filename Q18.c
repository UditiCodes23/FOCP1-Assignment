#include <stdio.h>

int main() {
    int arr[] = {2, 10, 10, 100, 2, 10, 11, 2, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int found = 0;

    printf("Duplicates: ");
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                isDuplicate = 1;
                break;
            }
        }
        if (isDuplicate) continue;

        int count = 0;
        for (int j = i; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        
        if (count > 1) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("-1");
    }
    printf("\n");
    return 0;
}
