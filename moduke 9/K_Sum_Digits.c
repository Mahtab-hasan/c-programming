#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);
    
    char a[n+1];
    scanf("%s",a);

    int sum=0;
    for (int i = 0; i <n; i++)
    {
        sum += a[i] - '0' ;

    }
    printf("%d\n",sum);

    return 0;
}
// #include <stdio.h>

// int main() {
//     int N;
//     scanf("%d", &N);
    
//     char A[N+1];
//     scanf("%s", A);
    
//     int i, sum = 0;
    
//     for(i=0; i<N; i++) {
//         sum += A[i] - '0';
//     }
    
//     printf("%d\n", sum);
    
//     return 0;
// }
