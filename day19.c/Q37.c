//Write a program to find the LCM of two numbers
#include <stdio.h>

int main(){
           int num1,num2,num3,num,hcf,lcm;
    printf("Enter The Number Which Number LCM You Want :\n");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        num3=num1;
    }
    else if(num2>num1)
    {
        num3=num2;
    }
    else
    {
        num3=num1;
    }
    for(int i=num3;i>1;i--)
    {
       if(num1%i==0  &&  num2%i==0)
       {
         hcf=i;
         break;
       }
    }
    lcm=(num1*num2)/hcf;
    printf("LCM=%d",lcm);

            
            return 0;
}