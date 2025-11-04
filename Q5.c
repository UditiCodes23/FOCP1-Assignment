#include <stdio.h>

int main() {
    int x, y;
    printf("Enter coordinates (x y): ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
        printf("The point (%d, %d) is in Quadrant I\n", x, y);
    else if (x < 0 && y > 0)
        printf("The point (%d, %d) is in Quadrant II\n", x, y);
    else if (x < 0 && y < 0)
        printf("The point (%d, %d) is in Quadrant III\n", x, y);
    else if (x > 0 && y < 0)
        printf("The point (%d, %d) is in Quadrant IV\n", x, y);
    else if (x == 0 && y == 0)
        printf("The point is at the Origin\n");
    else if (x == 0)
        printf("The point (%d, %d) is on the Y-axis\n", x, y);
    else
        printf("The point (%d, %d) is on the X-axis\n", x, y);

    return 0;
}