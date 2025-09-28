#include <stdio.h>
int main() {
    int batteryPercentage;
    printf("Enter battery percentage (0-100): ");
    scanf("%d", &batteryPercentage);
    if (batteryPercentage < 0 || batteryPercentage > 100) {
        printf("Invalid battery percentage!\n");
    } else if (batteryPercentage == 100) {
        printf("Battery Full\n");
    } else if (batteryPercentage >= 50) {
        printf("50%% Consumed\n");
    } else {
        printf("Low Battery\n");
    }
    return 0;
}

