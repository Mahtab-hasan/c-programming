#include<stdio.h>
void p(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",i);
    }
    printf("\n");

}
int main()
{
    int n;
    scanf("%d",&n);
    p(n);
    return 0;
}
