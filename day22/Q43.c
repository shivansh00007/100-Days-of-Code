#include <stdio.h>

int main() {
    int i, n, temp, digit, factorial, sum = 0;

    printf("Enter the Number: ");
    scanf("%d", &n);

    temp = n; 

    while (n > 0) {
        digit = n % 10;
        factorial=1;
          

        
        for (i = 1; i <= digit; i++) {
            factorial *= i;
        }
        
        n = n / 10;  
        sum += factorial;
    }

    if (sum == temp) {
        printf("It is a Strong Number\n");
    } else {
        printf("Not a Strong Number\n");
    }

    return 0;
}


