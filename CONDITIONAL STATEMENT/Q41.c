#include <stdio.h>
int main() {
    int liters;
    float bill = 0;
    printf("Enter water consumption in liters: ");
    scanf("%d", &liters);
    if (liters <= 1000) {
        bill = 0;  
    } 
    else if (liters <= 3000) {
        bill = ((liters - 1000) / 1000.0) * 5;
    } 
    else {
        bill = (2000 / 1000.0) * 5 + ((liters - 3000) / 1000.0) * 10;
    }
    printf("Total Water Bill: ?%.2f\n", bill);
    return 0;
}

