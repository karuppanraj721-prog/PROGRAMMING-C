#include <stdio.h>
int main() {
    int arr[] = {10, -5, 0, 3, -1, 0, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pos = 0, neg = 0, zero = 0;
    for(int i = 0; i < n; i++){
        if (arr[i] > 0) pos++;
        else if (arr[i] < 0) neg++;
        else zero++;
    }
    printf("Positive count: %d\n", pos);
    printf("Negative count: %d\n", neg);
    printf("Zero count: %d\n", zero);

    return 0;
}

