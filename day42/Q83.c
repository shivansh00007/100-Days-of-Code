#include <stdio.h>
#include <ctype.h>

int main() {
    char s[] = "Hello World";
    int vowels = 0, consonants = 0;
    int i = 0;

    while(s[i] != '\0') {
        char ch = tolower(s[i]);
        if(ch >= 'a' && ch <= 'z') {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
