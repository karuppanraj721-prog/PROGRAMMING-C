#include <stdio.h>
#include <stdbool.h>
bool isLeapYear(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return true;
    else
        return false;
}
int main() {
    int year, month;
    int daysInMonth;
    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    if (year <= 0) {
        printf("Invalid year.\n");
        return 1;
    }
    if (month < 1 || month > 12) {
        printf("Invalid month.\n");
        return 1;
    }
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31;
            break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        case 2:
            if (isLeapYear(year))
                daysInMonth = 29;
            else
                daysInMonth = 28;
            break;
    }
    printf("Year %d, Month %d has %d days.\n", year, month, daysInMonth);
    return 0;
}

