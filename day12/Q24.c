#include <stdio.h>

int main(){
            int unit,bill;
            printf("Enter The Unit Consumed For Electricity Bill: ");
            scanf("%d",&unit);
            
            if(unit<=100){
                        bill=5*unit;
                        printf("Your Electricity Bill is :%d",bill);
            }
            else if (unit<=200)                            
            {
                      bill=(5*100 + (unit-100)*7);
                      printf("Your Electricity Bill is :%d",bill);
            }

            else if (unit<=300)
            {
                        bill=(5*100+100*7+(unit-200)*10);
                          printf("Your Electricity Bill is :%d",bill);
            }
            else if(unit>=301){
                        bill=(5*100+100*7+100*10+(unit-300)*12);
                        printf("Your Electricity Bill is :%d",bill);
            }
            
            
            return 0;
}