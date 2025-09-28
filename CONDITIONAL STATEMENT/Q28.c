#include <stdio.h>
int main() {
    int units;
    float bill = 0, surcharge = 0;
    printf("Enter electricity units consumed: ");
    scanf("%d", &units);
    if (units <= 100) {
        bill = 0;  
    } else if (units <= 300) {
        bill = (units - 100) * 5;
    } else {
        bill = (200 * 5) + (units - 300) * 10;
    }
    if (units > 500) {
        surcharge = bill * 0.10;  
    }
    bill += surcharge;
    printf("Total Bill: ?%.2f\n", bill);
    return 0;
}

