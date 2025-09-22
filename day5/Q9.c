#include <stdio.h>
#include <math.h>
int main(){
            float r,p,t,S,C;
            printf("Enter The Value of Rate\n");
            scanf("%f",&r);

            printf("Enter The Value of Principal\n");
            scanf("%f",&p); 

            printf("Enter The Value of Time\n");
            scanf("%f",&t); 
           
            S=(p*r*t)/100.0;
            C=p* pow(1+r/100.0 , t);

            printf("Value Of Simple Interest :%.2f\n",S);
            printf("VAlue Of Compound Interest %.2f\n",C);
            return 0;
}
