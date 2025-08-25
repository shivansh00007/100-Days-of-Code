#include <stdio.h>

int main(){
            int length,breadth;
            printf("Enter The length\n");
            scanf("%d",&length);

            printf("Enter The breadth\n");
            scanf("%d",&breadth);

            printf("The Area of Rectangle %d \n",length*breadth);
            printf("The Perimeter of Rectangle %d",2*(length+breadth));
            return 0;
}