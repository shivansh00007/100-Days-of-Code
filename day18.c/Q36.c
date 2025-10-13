//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main(){
            int number1,number2,i;
            printf("Enter The Number 1 : ");
            scanf("%d",&number1);

            printf("Enter The Number 2 : ");
            scanf("%d",&number2);

            for(i=1;i<=number1 && i<=number2;i++){

                        if(number1%i==0 && number2%i==0){
                                    printf(" %d\n",i);
                        }
            }
            
            return 0;
}