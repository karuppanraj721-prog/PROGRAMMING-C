#include <stdio.h>
int lastOccurrence(int arr[], int n, int key) {
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] == key)
            return i; 
    }
    return -1; 
}
int main() {
    int arr[] = {1, 2, 3, 2, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    int index = lastOccurrence(arr, n, key);
    printf("Last occurrence of %d is at index %d\n", key, index);

    return 0;
}

