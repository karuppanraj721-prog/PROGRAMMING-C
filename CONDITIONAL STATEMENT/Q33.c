#include <stdio.h>
#include <string.h>
int main() {
    char color[10];
    printf("Enter traffic light color (Red/Yellow/Green): ");
    scanf("%s", color);
    if (strcmp(color, "Red") == 0 || strcmp(color, "red") == 0) {
        printf("Stop\n");
    } 
    else if (strcmp(color, "Yellow") == 0 || strcmp(color, "yellow") == 0) {
        printf("Ready\n");
    } 
    else if (strcmp(color, "Green") == 0 || strcmp(color, "green") == 0) {
        printf("Go\n");
    } 
    else {
        printf("Invalid color entered!\n");
    }
    return 0;
}

