#include <stdio.h>

int main() 
{
    int n;

    scanf("%d", &n);

    if (n % 2 == 0 || n < 1 || n > 21) 
    {
        return 0;
    }

    int m = (n + 1) / 2;

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
            if (i == m || j == m)
                printf("#");
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}
