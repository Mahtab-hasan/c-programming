#include <stdio.h>

int unitmat(int matrix[][100], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (i == j && matrix[i][j] != 1) 
            {
                return 0; 
            }
            if (i != j && matrix[i][j] != 0) 
            {
                return 0; 
            }
        }
    }
    return 1; 
}

int main() 
{
    int n;
    scanf("%d", &n);

    int matrix[100][100];
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (unitmat(matrix, n)) 
    {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }

    return 0;
}
