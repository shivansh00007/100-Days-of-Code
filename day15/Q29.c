//write a program to calculate the factorial of a number.
#include <stdio.h>

int main(){
            int i,n,factorial=1;
            printf("Enter The Value :\n");
            scanf("%d",&n);
            for(i=1;i<=n;i++){
                        factorial *= i;
            }
            printf("Factorial of %d is %d",n,factorial);
            return 0;
}