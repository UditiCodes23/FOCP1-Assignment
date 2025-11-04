#include <stdio.h>
#include <math.h>

long long binToDec(long long n) {
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

long long decToBin(int n) {
    long long bin = 0;
    int rem, i = 1;
    while (n != 0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}

int main() {
    int choice;
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        long long n;
        printf("Enter a binary number: ");
        scanf("%lld", &n);
        printf("Decimal: %lld\n", binToDec(n));
    } else if (choice == 2) {
        int n;
        printf("Enter a decimal number: ");
        scanf("%d", &n);
        printf("Binary: %lld\n", decToBin(n));
    } else {
        printf("Invalid choice.\n");
    }
    return 0;
}