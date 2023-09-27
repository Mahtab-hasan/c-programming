#include <stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);

    int tigerWins = 0, pathanWins = 0;
    int i;
    for (i = 0; i < N; i++) 
    {
        int x1, x2;
        printf("%d: ", i + 1);
        scanf("%d %d", &x1, &x2);

        if (x1 > x2) 
        {
            tigerWins++;
        } 
        else if (x1 < x2) 
        {
            pathanWins++;
        }
    }

    if (tigerWins > pathanWins) 
    {
        printf("Tiger\n");
    } 
    else if (tigerWins < pathanWins) 
    {
        printf("Pathan\n");
    } 
    else 
    {
        printf("Draw\n");
    }

    return 0;
}
