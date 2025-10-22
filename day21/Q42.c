#include <stdio.h>

int main(){
            int i,n,sum=0;
            printf("Enter the number\n");
            scanf("%d",&n);
            
            for(i=1;i<=n-1;i++){
                        if(n%i==0){
                                    sum+=i;
                        }
                      
            }
            if(sum==n){
                        printf("Perfect Number");

            }
            else{
                        printf("Not Perfect");
            }
            
            return 0;
}