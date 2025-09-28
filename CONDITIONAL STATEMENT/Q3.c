#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
        printf("Point (%d, %d) lies in the First Quadrant\n", x, y);
    else if (x < 0 && y > 0)
        printf("Point (%d, %d) lies in the Second Quadrant\n", x, y);
    else if (x < 0 && y < 0)
        printf("Point (%d, %d) lies in the Third Quadrant\n", x, y);
    else if (x > 0 && y < 0)
        printf("Point (%d, %d) lies in the Fourth Quadrant\n", x, y);
    else if (x == 0 && y == 0)
        printf("Point (%d, %d) lies at the Origin\n", x, y);
    else if (x == 0)
        printf("Point (%d, %d) lies on the Y-axis\n", x, y);
    else
        printf("Point (%d, %d) lies on the X-axis\n", x, y);

    return 0;
}

