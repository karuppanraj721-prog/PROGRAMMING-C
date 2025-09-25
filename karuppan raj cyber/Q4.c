#include<stdio.h>

int main() {
    char c1, c2;
    printf("Enter two characters: ");
    scanf(" %c %c", &c1, &c2); 

    if (c1 == c2) {
        printf("Characters are equal.\n");
    } else {
        printf("Characters are not equal.\n");
    }

    return 0;
}