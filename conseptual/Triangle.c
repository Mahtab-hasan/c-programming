// #include <stdio.h>

// int fun(int A, int B, int C) 
// {
//     if (A == B && B == C && A > 0) 
//     {
//         return 1;  
//     } 
//     else {
//         return 0;  
//     }
// }

// int main() 
// {
//     int A, B, C;
    
//     scanf("%d %d %d", &A, &B, &C);
    
//     if (fun(A, B, C)) 
//     {
//         printf("Yes\n");
//     } 
//     else 
//     {
//         printf("No\n");
//     }
    
//     return 0;
// }


#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if (a == b && b== c && a > 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    

    return 0;
}