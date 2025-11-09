#include <stdio.h>

int main() {
    int number = 1123455577;
    int digits_count[10] = {0};
    int max_digit = 0;
    int max_count = 0;
    int temp = number;

    while (temp > 0) {
        int digit = temp % 10;
        digits_count[digit]++;
        temp /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (digits_count[i] > max_count) {
            max_count = digits_count[i];
            max_digit = i;
        }
    }

    printf("Digit with the highest frequency: %d\n", max_digit);
    printf("Frequency: %d\n", max_count);

    return 0;
}
