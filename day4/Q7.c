#include <stdio.h>

int main(){
            int a,b;
            printf("Enter The First Number: \n");
            scanf("%d",&a);

            printf("Enter The Second Number: \n");
            scanf("%d",&b);

            
            a=a+b;//a=15,a=5,b=10
            b=a-b;//b=5,a=15
            a=a-b;//a=10



            printf("After Swapping :\n");
            printf("First Number: %d\n",b);
            printf("Second Number: %d",a);

            return 0;
}