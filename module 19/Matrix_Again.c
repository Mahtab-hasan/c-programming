#include <stdio.h>

int main() 
{
    int N, M;
    scanf("%d %d", &N, &M);

    int matrix[100][100];
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int j = 0; j < M; j++) 
    {
        printf("%d ", matrix[N - 1][j]);
        //  printf("\n");
    }
    printf("\n");

    for (int i = 0; i < N; i++) 
    {
        printf("%d ", matrix[i][M - 1]);
    }

    return 0;
}


// #include <stdio.h>

// int main() {
//     int N, M;
//     scanf("%d %d", &N, &M);

//     int matrix[100][100];
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     // Printing the last row
//     for (int j = 0; j < M; j++) {
//         printf("%d ", matrix[N - 1][j]);
//     }
//     printf("\n");

//     // Printing the last column
//     for (int i = 0; i < N; i++) {
//         printf("%d\n", matrix[i][M - 1]);
//     }

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int N, M;
//     scanf("%d %d", &N, &M);

//     int matrix[100][100];
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     // Printing the last row
//     for (int j = 0; j < M; j++) 
//     {
//         printf("%d ", matrix[N - 1][j]);
//     }
//     printf("\n");

//     // Printing the last column
//     for (int i = 0; i < N-1; i++) {
//         printf("%d ", matrix[i][M - 1]);
//     }
//     printf("%d", matrix[N - 1][M - 1]);

//     return 0;
// }
