#include <stdio.h>
int main() {
    int side1, side2, side3, side4;
    printf("Enter four sides of the quadrilateral: ");
    scanf("%d %d %d %d", &side1, &side2, &side3, &side4);
    if (side1 == side2 && side2 == side3 && side3 == side4) {
        printf("The sides form a Square.\n");
    }
    else if ((side1 == side3 && side2 == side4)) {
        printf("The sides form a Rectangle.\n");
    }
    else {
        printf("The sides do not form a Square or Rectangle.\n");
    }
    return 0;
}

