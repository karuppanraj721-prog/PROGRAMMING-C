#include <stdio.h>
#include <string.h>     
int main() {
    char day[15];
    float ticketPrice;
    printf("Enter day of the week: ");
    scanf("%s", day);
    if (strcmp(day, "Saturday") == 0 || strcmp(day, "saturday") == 0 || 
        strcmp(day, "Sunday") == 0   || strcmp(day, "sunday") == 0) {
        ticketPrice = 150.0;  // Weekend price
        printf("It's Weekend!\n");
        printf("Ticket Price: ?%.2f\n", ticketPrice);
    } 
    else if (strcmp(day, "Monday") == 0 || strcmp(day, "monday") == 0 ||
             strcmp(day, "Tuesday") == 0 || strcmp(day, "tuesday") == 0 ||
             strcmp(day, "Wednesday") == 0 || strcmp(day, "wednesday") == 0 ||
             strcmp(day, "Thursday") == 0 || strcmp(day, "thursday") == 0 ||
             strcmp(day, "Friday") == 0 || strcmp(day, "friday") == 0) {
        ticketPrice = 100.0;  // Weekday price
	        printf("It's Weekday!\n");
	        printf("Ticket Price: ?%.2f\n", ticketPrice);
    } 
    else {
        printf("Invalid day entered!\n");
    }
    return 0;
}

