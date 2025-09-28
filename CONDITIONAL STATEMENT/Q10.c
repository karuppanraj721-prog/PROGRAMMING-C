#include <stdio.h>
int main() {
    int year, firstTwo, lastTwo;
    printf("Enter a year (4 digits): ");
    scanf("%d", &year);
    firstTwo = year / 100;
    lastTwo = year % 100;
    if (firstTwo == lastTwo) {
        printf("The first two digits and last two digits of %d are equal.\n", year);
    } else {
        printf("The first two digits and last two digits of %d are NOT equal.\n", year);
    }
    return 0;
}

