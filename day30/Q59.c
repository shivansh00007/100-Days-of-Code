#include <stdio.h>

int main() {
    int arr[] = {2, 7, 4, 9, 12, 15, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int even_count = 0, odd_count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Even numbers count: %d\n", even_count);
    printf("Odd numbers count: %d\n", odd_count);

    return 0;
}
