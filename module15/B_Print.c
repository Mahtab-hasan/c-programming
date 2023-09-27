#include<stdio.h>
void printer(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d",i);
        if (i<n)
        {
            printf("I love Recursion\n",n);
        }
        
    }
    printf("\n");
    
}
int main()
{
    int n;
    scanf("%d",&n);

    printer(n);
    return 0;
}