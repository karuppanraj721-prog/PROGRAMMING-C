#include <stdio.h>
int main() {
    int temp;
    printf("Enter temperature in Celsius: ");
    scanf("%d", &temp);
    if (temp < 10) {
        printf("Weather Condition: Cold\n");
    } 
    else if (temp >= 10 && temp <= 25) {
        printf("Weather Condition: Pleasant\n");
    } 
    else if (temp > 25 && temp <= 35) {
        printf("Weather Condition: Hot\n");
    } 
    else {
        printf("Weather Condition: Heatwave\n");
    }
    return 0;
}

