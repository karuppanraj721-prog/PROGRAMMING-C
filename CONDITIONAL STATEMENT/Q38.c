#include <stdio.h>
int main() {
    int speed;
    printf("Enter vehicle speed (km/h): ");
    scanf("%d", &speed);
    if (speed < 0) {
        printf("Invalid speed entered!\n");
    } 
    else if (speed > 100) {
        printf("Alert! Speed exceeds 100 km/h. Overspeeding!\n");
    } 
    else {
        printf("Speed is within the safe limit.\n");
    }
    return 0;
}

