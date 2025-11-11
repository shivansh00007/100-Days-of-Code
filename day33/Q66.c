#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int position = 2;
    int i;

    for (i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;

    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
