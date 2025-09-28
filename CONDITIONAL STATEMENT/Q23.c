#include <stdio.h>
int main() {
    float temperature;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &temperature);
    if (temperature > 100) {
        printf("Fever detected! Temperature is above 100.\n");
    } else {
        printf("Temperature is normal.\n");
    }
    return 0;
}

