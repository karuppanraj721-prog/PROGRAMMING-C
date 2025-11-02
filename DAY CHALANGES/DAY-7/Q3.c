#include <stdio.h>

int main() {
    int m;

    printf("Enter your marks: ");
    scanf("%d", &m);

    if (m >= 90)
        printf("Grade: A\n");
    else if (m >= 75)
        printf("Grade: B\n");
    else if (m >= 50)
        printf("Grade: C\n");
    else
        printf("Grade: Fail\n");

    return 0;
}
