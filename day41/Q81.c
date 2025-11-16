#include <stdio.h>

int main() {
    char s[] = "hello world";
    int count = 0;

    while (s[count] != '\0') {
        count++;
    }

    printf("%d", count);
    return 0;
}

