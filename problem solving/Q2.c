#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    float average = (float)sum / n;
    printf("Sum of the array elements: %d\n", sum);
    printf("Average of the array elements: %.2f\n", average);
    return 0;
}

