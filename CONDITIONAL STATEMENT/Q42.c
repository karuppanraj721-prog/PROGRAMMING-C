#include <stdio.h>
int main() {
    float totalData, usedData;
    printf("Enter total data limit (in GB): ");
    scanf("%f", &totalData);
    printf("Enter data used so far (in GB): ");
    scanf("%f", &usedData);
    if (usedData < 0 || usedData > totalData) {
        printf("Invalid data usage value!\n");
    } 
    else if (usedData == 0) {
        printf("No Data Used Yet.\n");
    }
    else if (usedData < totalData / 2) {
        printf("Alert: Low Data Consumed\n");
    } 
    else if (usedData == totalData / 2) {
        printf("Alert: Half Consumed\n");
    } 
    else if (usedData < totalData) {
        printf("Alert: More than Half Consumed\n");
    } 
    else {
        printf("Alert: Data Over!\n");
    }
    return 0;
}

