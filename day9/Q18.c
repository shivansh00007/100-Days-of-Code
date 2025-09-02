#include <stdio.h>

int main(){
            int Percentage;
            printf("Enter The Percentage \n");
            scanf("%d",&Percentage);

            if(Percentage>=90 && Percentage<=100){
                        printf("Grade A");

            }
            else if(Percentage>=80 && Percentage<=89){
                        printf("Grade B");

            }
            else if(Percentage>=70 && Percentage>=79){
                        printf("Grade C");
            }
            else if(Percentage>=60 && Percentage<=69){
                        printf("Grade D");
            }
            else if(Percentage>=50 && Percentage<=59){
                        printf("Grade E");
            }
            else if(Percentage>=40 && Percentage<=49){
                        printf("Grade F");
            }
            else{
                        printf("You are Fail");
            }

            return 0;
}