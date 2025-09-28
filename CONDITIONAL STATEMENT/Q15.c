#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);
    if (marks > 100 || marks < 0) {
        printf("Invalid marks entered.\n");
        return 1;
    }
    switch (marks / 10) {
        case 10:
        case 9:
            printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        default:
            printf("Grade: Fail\n");
            break;
    }
    return 0;
}

