#include <stdio.h>
int main() {
    int balance = 10000;  // Example account balance
    int amount;
    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);
    if (amount <= 0) {
        printf("Invalid amount! Please enter a positive value.\n");
    } 
    else if (amount > balance) {
        printf("Transaction failed! Insufficient balance.\n");
    } 
    else if (amount % 100 != 0) {
        printf("Transaction failed! Amount must be a multiple of 100.\n");
    } 
    else {
        balance -= amount;
        printf("Withdrawal successful!\n");
        printf("Remaining Balance: ?%d\n", balance);
    }
    return 0;
}

