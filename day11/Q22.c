#include <stdio.h>

int main(){
            char procced;

            do{
                        float profit,loss,sellingprice,costprice,profitpercentage,losspercentage;
                        printf("Enter The Costprice\n");
                        scanf("%f",&costprice);

                        printf("Enter The SellingPrice\n");
                        scanf("%f",&sellingprice);

                        if(sellingprice>costprice){
                                    profit=sellingprice-costprice;
                                    profitpercentage =(profit/costprice)*100 ;
                                    printf("Your Profit Percenatge is %.2f\n",profitpercentage);

                        }
                        else if(costprice>sellingprice){
                                    loss=costprice-sellingprice;
                                    losspercentage=(loss/costprice)*100;
                                    printf("Your loss Percentage is %.2f\n",losspercentage);
                        }
                        else{
                                    printf("There is No profit No loss");
                        }
                        printf("\nYou want to perform anyother calaculation (y/n):");

                        scanf(" %c", &procced);
            
                        printf("\n");
            }while(procced=='y' || procced=='Y');

            printf("Thanks for Using");
            return 0;
}