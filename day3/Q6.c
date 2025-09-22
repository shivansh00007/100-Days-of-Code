 #include <stdio.h>
 
 int main(){
            int a,b,new;
            printf("Enter The First Number: \n");
            scanf("%d",&a);

            printf("Enter The Second Number: \n");
            scanf("%d",&b);

            new=a;//a=3,c=3
            a=b;//b=6,a=6
            b=new;//a=6,b=3,c=3

            printf("After Swapping : \n");
            printf("First Number:%d\n",a );
            printf("Second Number:%d",b);
            return 0;
 }