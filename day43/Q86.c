//Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int c;

    printf("Enter string:");
    scanf("%s",str); 

    int l=strlen(str);
     for(int i=0; i < l/2; i++) 
      {
        if(str[i] != str[l - i - 1]) 
        {
            c = 0; 
            break;
        }
    }
    if(c==0)
    {
        printf("Not a palindrome string");
    }
    else
    {
        printf("Palindrome string");
    }
    return 0;
}