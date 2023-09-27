#include <stdio.h>

int main() 
{
    int N, i;
    int marks[100];
    int highest_marks = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++) 
    {
        scanf("%d", &marks[i]);
        if (marks[i] > highest_marks) 
        {
            highest_marks = marks[i];
        }
    }

    for (i = 0; i < N; i++) 
    {
        printf("%d ", highest_marks - marks[i]);
    }
    printf("\n");

    return 0;
}
// #include <stdio.h>

// int main() 
// {
//     int N;
//     int marks[100];
//     int highest_marks = 0;

//     scanf("%d", &N);

//     printf("%d", N);
//     for (int i = 0; i < N; i++) 
//     {
//         scanf("%d", &marks[i]);
//         if (marks[i] > highest_marks)
//         {
//             highest_marks = marks[i];
//         }
//     }

//     for (int i = 0; i < N; i++) 
//     {
//         printf("%d ", highest_marks - marks[i]);
//     }
//     printf("\n");

//     return 0;
// }
