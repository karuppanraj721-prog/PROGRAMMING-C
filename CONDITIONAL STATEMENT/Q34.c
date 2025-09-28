#include <stdio.h>
int main() {
    float amount, discount = 0, finalAmount;
    printf("Enter purchase amount: ");
    scanf("%f", &amount);
    if (amount >= 5000) {
        discount = amount * 0.20;   
    } 
    else if (amount >= 3000) {
        discount = amount * 0.15;   
    } 
    else if (amount >= 1000) {
        discount = amount * 0.10;  
    } 
    else {
        discount = 0;  // No discount
    }
    finalAmount = amount - discount;
    printf("Purchase Amount: ?%.2f\n", amount);
    printf("Discount: ?%.2f\n", discount);
    printf("Final Amount to Pay: ?%.2f\n", finalAmount);

    return 0;
}

