#include <stdio.h>
int main() {
    int year1, year2;
    int lastDigit1, lastDigit2;
    printf("Enter first year: ");
    scanf("%d", &year1);
    printf("Enter second year: ");
    scanf("%d", &year2);
    lastDigit1 = year1 % 10;
    lastDigit2 = year2 % 10; 
    if (lastDigit1 == lastDigit2) {
        printf("Both years %d and %d have the same last digit.\n", year1, year2);
    } else {
        printf("The years %d and %d do not have the same last digit.\n", year1, year2);
    }
    return 0;
}

