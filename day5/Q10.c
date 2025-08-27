#include <stdio.h>

int main(){
           float S,H,M;
           printf("Enter The Seconds\n");
           scanf("%f",&S);
           M=S/60;
           H=M/60;
           S=S;

           printf("Seconds To Mintues :%.2f Mintues \n ",M);
           printf("Seconds To Hour :%.2f Hours\n",H );
           printf("Seconds to Seconds :%.2f Seconds\n ",S); 
            return 0;
}