#include <stdio.h>

int main() {
    int num, lastDigit, nextDigit, flag = 1;

    scanf("%d", &num);
    lastDigit = num % 10;
    num = num / 10;

    while (num > 0) {
        nextDigit = num % 10;
        if (nextDigit > lastDigit) {
            flag = 0; 
            break;
        }
        lastDigit = nextDigit;
        num = num / 10;
    }

    if (flag)
        printf("Digits are in ascending order.\n");
    else
        printf("Digits are not in ascending order.\n");

    return 0;
}
