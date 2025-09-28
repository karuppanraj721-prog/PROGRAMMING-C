#include <stdio.h>
int main() {
    int age;
    float ticketPrice;
    printf("Enter passenger age: ");
    scanf("%d", &age);
    if (age < 0) {
        printf("Invalid age!\n");
    }
    else if (age <= 12) {
        ticketPrice = 50.0;   // Child ticket
        printf("Category: Child\n");
        printf("Ticket Price: ?%.2f\n", ticketPrice);
    }
    else if (age <= 59) {
        ticketPrice = 100.0;  // Adult ticket
        printf("Category: Adult\n");
        printf("Ticket Price: ?%.2f\n", ticketPrice);
    }
    else {
        ticketPrice = 70.0;   // Senior citizen ticket
        printf("Category: Senior Citizen\n");
        printf("Ticket Price: ?%.2f\n", ticketPrice);
    }
    return 0;
}

