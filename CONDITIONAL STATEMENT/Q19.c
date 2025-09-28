#include <stdio.h>
int main() {
    float billAmount, discount = 0.0, finalAmount;
    printf("Enter the bill amount: ");
    scanf("%f", &billAmount);
    if (billAmount >= 5000) {
        discount = 0.10 * billAmount;
    } else if (billAmount >= 4000) {
        discount = 0.07 * billAmount; 
    } else if (billAmount >= 2000) {
        discount = 0.05 * billAmount;
    } else {
        discount = 0.0;
    }
    finalAmount = billAmount - discount;
    printf("Original Bill Amount: %.2f\n", billAmount);
    printf("Discount: %.2f\n", discount);
    printf("Amount to Pay: %.2f\n", finalAmount);
    return 0;
}

