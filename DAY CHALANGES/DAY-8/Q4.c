#include <stdio.h>

int main() {
    int num, digit;
    int count = 0, sum = 0, product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        num = -num;   

    if (num == 0) {   
        count = 1;
        sum = 0;
        product = 0;
    } else {
        while (num > 0) {
            digit = num % 10;     
            sum = sum + digit;    
            product = product * digit;  
            count = count + 1;   
            num = num / 10;       
        }
    }

    printf("\nCount  = %d", count);
    printf("\nSum  = %d", sum);
    printf("\nProduct = %d", product);

    return 0;
}
