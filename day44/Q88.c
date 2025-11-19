//Replace spaces with hyphens in a string.
#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    scanf("%[^\n]", str);

    while (str[i] != '\0') {
        if (str[i] == ' ')
            str[i] = '-';
        i++;
    }

    printf("%s", str);

    return 0;
}
