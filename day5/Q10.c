#include <stdio.h>

int main()
{
            int S, H, M;
            printf("Enter The Seconds\n");
            scanf("%d", &S);
            H = S/3600;
            M = S % 60;
            S = S % 3600;

            printf("%.2d Hours:", H);
            printf("%.2d Mintues:", M);
            printf("%.2d Seconds", S);
            return 0;
}