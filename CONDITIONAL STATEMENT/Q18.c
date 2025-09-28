#include <stdio.h>
int main() {
    unsigned long balance = 1000, deposit, withdraw;
    int choice, pin, k = 0;
    char transaction = 'y';
    const int correctPin = 1520;
    while (1) {
        printf("ENTER YOUR SECRET PIN NUMBER: ");
        scanf("%d", &pin);
        if (pin == correctPin) {
            break;
        } else {
            printf("PLEASE ENTER VALID PASSWORD\n");
        }
    }
    do {
        printf("\n******** Welcome to ATM Service **************\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Cash\n");
        printf("3. Deposit Cash\n");
        printf("4. Quit\n");
        printf("*********************************************\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\nYOUR BALANCE IN Rs: %lu\n", balance);
                break;
            case 2:
                printf("\nENTER THE AMOUNT TO WITHDRAW: ");
                scanf("%lu", &withdraw);
                if (withdraw % 100 != 0) {
                    printf("\nPLEASE ENTER THE AMOUNT IN MULTIPLES OF 100\n");
                } else if (withdraw > (balance - 500)) {
                    printf("\nINSUFFICIENT BALANCE\n");
                } else {
                    balance -= withdraw;
                    printf("\nPLEASE COLLECT CASH\n");
                    printf("YOUR CURRENT BALANCE IS %lu\n", balance);
                }
                break;
            case 3:
                printf("\nENTER THE AMOUNT TO DEPOSIT: ");
                scanf("%lu", &deposit);
                balance += deposit;
                printf("YOUR NEW BALANCE IS %lu\n", balance);
                break;
            case 4:
                printf("\nTHANK YOU FOR USING OUR ATM SERVICE\n");
                k = 1;
                break;
            default:
                printf("\nINVALID CHOICE\n");
                break;
        }
        if (k == 0) {
            printf("\nDO YOU WISH TO HAVE ANOTHER TRANSACTION? (y/n): ");
            fflush(stdin);
            scanf(" %c", &transaction);
            if (transaction == 'n' || transaction == 'N') {
                printf("\nTHANKS FOR USING OUR ATM SERVICE\n");
                break;
            }
        }
    } while (k == 0);

    return 0;
}

