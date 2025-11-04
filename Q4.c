#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    
    int orig_a = a, orig_b = b;

    printf("\n--- 1. Temporary Variable ---\n");
    printf("Before: a = %d, b = %d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("After:  a = %d, b = %d\n", a, b);

    a = orig_a; 
    b = orig_b;
    printf("\n--- 2. Bitwise XOR ---\n");
    printf("Before: a = %d, b = %d\n", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After:  a = %d, b = %d\n", a, b);

    a = orig_a; 
    b = orig_b;
    printf("\n--- 3. Arithmetic (Arbitrary) ---\n");
    printf("Before: a = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After:  a = %d, b = %d\n", a, b);

    a = orig_a; 
    b = orig_b;
    printf("\n--- 4. Pointer Manipulation ---\n");
    printf("Before: a = %d, b = %d\n", a, b);
    int *ptrA = &a;
    int *ptrB = &b;
    int tempPtr = *ptrA;
    *ptrA = *ptrB;
    *ptrB = tempPtr;
    printf("After:  a = %d, b = %d\n", a, b);

    return 0;
}