#include <stdio.h>

int main() {
    int T, N, S;

    scanf("%d", &T);

    for (int i = 1; i <= T; i++) 
    {
    //     printf("case %d: ", i);
        scanf("%d", &N);

        int list[N];

        // printf("case %d: ", i);
        for (int j = 0; j < N; j++) 
        {
            scanf("%d", &list[j]);
        }

        // printf("case %d: ", i);
        scanf("%d", &S);

        int found = 0;
        int position = -1;

        for (int j = 0; j < N; j++) 
        {
            if (list[j] == S) 
            {
                found = 1;
                position = j + 1;
                break;
            }
        }

        if (found) 
        {
            printf("Case %d: %d\n", i, position);
        } 
        else {
            printf("Case %d: Not Found\n", i);
        }
    }

    return 0;
}
