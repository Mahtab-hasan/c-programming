#include<stdio.h>

void fun(int n)
{
    for (int i = n; i >= 1; i--)
    {
        printf("%d",i);
        if (i!=1)
        {
            printf(" ");
        }
        
        
    }
}

int main()
{
    int n;
    scanf("%d",&n);

    fun(n);
    return 0;
}