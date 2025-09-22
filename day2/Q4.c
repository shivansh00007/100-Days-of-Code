#include <stdio.h>

int main(){
            float Radius,Area,Circumference;
            printf("Enter The Radius\n");
            scanf("%f",&Radius);

            Area=3.14*Radius*Radius;
            Circumference=2*3.14*Radius;

            printf("The Area of Circle %f\n",Area);
            printf("The Circumference of Circle %f",Circumference);
            return 0;
}