#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    for (int T = 1; T <= test; T++)
    {
        int n;
        scanf("%d",&n);
        do
        {
            printf("%d ",n%10);
            n=n/10;
        }
         while (n!=0);
         printf("\n");
        

    }
    
    return 0;
}