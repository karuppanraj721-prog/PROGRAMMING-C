#include <stdio.h>
int main() {
    int speed;
    printf("Enter vehicle speed (km/h): ");
    scanf("%d", &speed);
    if (speed > 100) {
        printf("Over-speeding! Fine imposed.\n");
    } 
    else {
        printf("Speed is within limit.\n");
    }
    return 0;
}

