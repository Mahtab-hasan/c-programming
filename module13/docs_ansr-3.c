#include <stdio.h>
int count_before_zero( int arr[] , int n ) 
{  
    int C = 0;
    for (int i = 0; i < n; i++)
     {    
        if (arr[i] == 0)      
        {
            break;
        }
        C++;
    }
    return C;
}
int main() 
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
     {    scanf("%d", &arr[i]);
    }
    int C = count_before_zero(arr, n);
    printf("%d\n", C);
    return 0;
}
 