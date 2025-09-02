#include <stdio.h>

int main(){
            int Weekdays;
            printf("Enter the Number(1-7)\n");
            scanf("%d",&Weekdays);

            switch(Weekdays){
                        case 1:
                        printf("Monday");
                        break;

                        case 2:
                        printf("Tuesday");
                        break;

                        case 3:
                        printf("Wednesday");
                        break;

                        case 4:
                        printf("Thusday");
                        break;

                        case 5:
                        printf("Friday");
                        break;

                        case 6:
                        printf("Saturday");
                        break;

                        case 7:
                        printf("Sunday");
                        break;

                        default:
                        printf("You Entered the invaild Number");

            }
            return 0;
}