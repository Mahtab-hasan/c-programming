#include <stdio.h>

int minimum(int a, int b) 
{
    return a < b ? a : b;
}

int maximum(int a, int b) 
{
    return a > b ? a : b;
}

int main()
 {
    int n,arr[10001];
    int minimum_val = 1000001,maximum_val = -1;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &arr[i]);
        minimum_val = minimum(minimum_val, arr[i]);
        maximum_val = maximum(maximum_val, arr[i]);
    }
    
    printf("%d %d\n", minimum_val, maximum_val);
    
    return 0;
}
