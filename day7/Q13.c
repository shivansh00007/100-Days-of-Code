#include <stdio.h>

int main(){
            int a;
            printf("Enter the Year\n");
            scanf("%d",&a);

            if(a%400==0){
                        printf("Its a Leap Year");

            }
            else if(a%4==0){
                        printf("Its a Leap year");

            }
            else if(a%100==0){
                        printf("Its a non Leap year");

            }
            else{
                        printf("Its a non Leap year");

            }
            return 0;
}