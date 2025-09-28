#include <stdio.h>
int main() {
    int battery;
    printf("Enter battery percentage (0-100): ");
    scanf("%d", &battery);
    if (battery < 0 || battery > 100) {
        printf("Invalid battery percentage!\n");
    } 
    else if (battery >= 80) {
        printf("Battery Status: Full\n");
    } 
    else if (battery >= 30) {
        printf("Battery Status: Moderate\n");
    } 
    else {
        printf("Battery Status: Low\n");
    }
    return 0;
}

