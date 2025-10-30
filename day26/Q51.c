#include <stdio.h>

int main()
{
            int n = 5;
            for (int i = 1; i <= n; i++)
            {
                        for (int space = 1; space <= n - i; space++)
                        {
                                    printf(" ");
                        }
                        for (int num = n - i + 1; num <= n; num++)
                        {
                                    printf("%d", num);
                        }
                        printf("\n");
            }
            return 0;
}
