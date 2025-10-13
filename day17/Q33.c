//Write a program to check if a number is an Armstrong number
#include <stdio.h>

int main(){
            int i,number,sum=0;
            printf("Enter The Number\n");
            scanf("%d",&i);
            i=number;

            while(i>0){
                        sum=sum+(i%10)*(i%10)*(i%10);
                        i=i/10;

            }
            if(number==sum){
                        printf("Its A ArmStrong Number");
            }
            else{
                        printf("Not A ArmStong Number");
            }
            return 0;
}