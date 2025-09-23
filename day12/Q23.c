#include <stdio.h>

int main(){
            int days,fine;
            printf("Enter the Late days Of Sumbition of Books in Library:\n");
            scanf("%d",&days);
            if(days<=5){
                        fine=2*days;
                        printf("Fine %d",fine);
            }
            else if(days>=6 && days<=20){
                        fine=4*days;
                        printf("Fine %d",fine);
            }
            else if(days>=21 && days<=29){
                        fine=6*days;
                        printf("Fine %d",fine);
            }
            else if(days>=30){
                        printf("Your Memebership Has been Cancelled");
            }
            return 0;
}