//Write a program to check if a number is prime
#include <stdio.h>
int main()
{
    int c=0;
    int n;
    printf("Enter The Number\n");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("The Number is Prime");
    }
    else
    {
        printf("The Number is Not Prime");
    }
    return 0;
}