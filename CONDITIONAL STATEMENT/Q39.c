#include <stdio.h>
#include <string.h>
int main() {
    char mobile[20];
    printf("Enter mobile number: ");
    scanf("%s", mobile);
    int length = strlen(mobile);
    if (length >= 10) {
        printf("Valid Number\n");
    } else {
        printf("Invalid Number\n");
    }
    return 0;
}

