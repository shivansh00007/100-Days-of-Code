#include <stdio.h>

int main() {
    int arr[100] = {1, 3, 5, 7, 9};
    int size = 5;
    int element = 6;
    int i;

    for (i = size - 1; (i >= 0 && arr[i] > element); i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = element;
    size++;

    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
