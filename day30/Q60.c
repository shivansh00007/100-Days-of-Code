#include <stdio.h>

int main() {
    int arr[] = {3, -1, 0, 7, -5, 0, 2}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int positive_count = 0, negative_count = 0, zero_count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }

    printf("Positive numbers count: %d\n", positive_count);
    printf("Negative numbers count: %d\n", negative_count);
    printf("Zero count: %d\n", zero_count);

    return 0;
}
