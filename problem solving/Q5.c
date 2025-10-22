#include <stdio.h>

int firstOccurrence(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;  
    }
    return -1; 
}

int main() {
    int arr[] = {5, 3, 7, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;

    int index = firstOccurrence(arr, n, key);
    if (index != -1)
        printf("First occurrence of %d is at index %d\n", key, index);
    else
        printf("-1\n");

    return 0;
}

