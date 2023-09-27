#include <stdio.h>

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
    
    int ages[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &ages[i]);

    }
    
    bubbleSort(ages, n);
    
    if (n % 2 == 1) 
    {


        int mid_indx = (n + 1) / 2 - 1;
        printf("%d\n", ages[mid_indx]);
    }
     
    else 
    {
        int mid_i1 = n / 2 - 1;
        int mid_i2 = mid_i1 + 1;
        printf("%d %d\n", ages[mid_i1], ages[mid_i2]);
    }
    
    return 0;
}
