#include <stdio.h>

int main() {
    int a, b, sub;
    
    printf("Enter two integers (a and b to find a - b): ");
    scanf("%d %d", &a, &b);
    
    sub = a + (~b + 1);
    
    printf("Result (a - b) = %d\n", sub);
    return 0;
}