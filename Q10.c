#include <stdio.h>

int main() {
    int marks[] = {85, 99, 76, 99, 92, 99, 88};
    int n = sizeof(marks) / sizeof(marks[0]);
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (marks[i] == 99) {
            count++;
        }
    }

    printf("Total students who scored 99: %d\n", count);
    return 0;
}
