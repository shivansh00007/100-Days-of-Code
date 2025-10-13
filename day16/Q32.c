//Write a program to check if a number is a palindrome
#include <stdio.h>

int main(){
           int n,number,remainder;
           int reversed=0;
           printf("Enter The Number\n");
           scanf("%d",&n);
           
           number=n;

           while(n>0){
            remainder=n%10;
            reversed=(reversed*10)+remainder;
            n=n/10;
           }
           if(reversed==number){
            printf("Its A Palindrome number");
           }
           else{
            printf("Not A Palidrome Number");
           }
            return 0;
}