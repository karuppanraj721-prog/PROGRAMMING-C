#include <stdio.h>

int main() {
    int asciiValue;
    printf("Enter ASCII value: ");
    scanf("%d", &asciiValue);

    printf("The character for ASCII value %d is: %c\n", asciiValue, asciiValue);
    return 0;
}

