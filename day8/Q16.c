#include <stdio.h>

int main(){
            int a,b,c;
            printf("Enter the number (a)\n");
            scanf("%d",&a);

            printf("Enter the number (b)\n");
            scanf("%d",&b);

            printf("Enter the number (c)\n");
            scanf("%d",&c);

            if(a>=b){
                        printf("a is largest",a);

            }
            else if(b>=c){
                        printf("b is largest",b);
            }
            else if(c>=a){
                        printf("c is largest",c);

            }
            else{
                        printf("Error Enter the Right Number");
            }
            return 0;
}