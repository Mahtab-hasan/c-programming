#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, k, space;
    scanf("%d", &n);

  
    for (i = 0; i < n; i++)
     {
        for (space = 1; space <= n - i; space++) 
        {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = n - 2; i >= 0; i--)
     {
        for (space = 1; space <= n - i; space++) 
        {
            printf(" ");
        }
        for (k = 0; k < 2 * i + 1; k++)
         {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
