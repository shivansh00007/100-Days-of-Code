#include <stdio.h>

int main(){
            int number,temp_num,last_number;
            int sum=0;

            printf("Enter The Number\n");
            scanf("%d",&number);

            temp_num=number;        

            while(number>0){
                        last_number=number%10;
                        sum += last_number;
                        number/=10;  
                      }
                      printf("The sum of %d is %d  ",temp_num,sum);
            return 0;
}