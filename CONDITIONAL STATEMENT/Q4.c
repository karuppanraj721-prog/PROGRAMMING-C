#include <stdio.h>

int main() {
    int angle1, angle2, angle3, sum;
    printf("Enter three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    sum = angle1 + angle2 + angle3;
    if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        printf("The triangle is valid.\n");
    } else {
        printf("The given angles do not form a valid triangle.\n");
    }
    return 0;
}

