#include <stdio.h>

int main() {
    int storedPIN = 1234;   
    int enteredPIN;
    int amount, balance = 10000;

    printf("Enter your ATM PIN: ");
    scanf("%d", &enteredPIN);

    if (enteredPIN == storedPIN) {
        printf("PIN verified successfully!\n");
        
        printf("Enter withdrawal amount: ");
        scanf("%d", &amount);

        if (amount > 0 && amount <= balance) {
            balance -= amount;
            printf("Withdrawal successful!\n");
            printf("Remaining Balance: ?%d\n", balance);
        } else {
            printf("Invalid amount or insufficient balance.\n");
        }
    } else {
        printf("Incorrect PIN. Access Denied!\n");
    }

    return 0;
}

