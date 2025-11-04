#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 11, 13, 17, 19, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }

    printf("Number of prime numbers: %d\n", count);
    return 0;
}
