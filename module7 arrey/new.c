#include<stdio.h>
int main()
{
    int n;
    scanf("$d",&n);
    int num,sum_even=0,sum_odd=0;
    for(int i = 0; i< n ; i++)
    {
         scanf("%d ",num);
         if( num % 2 ==0)
         {
            sum_even += num;
         }
         else
         {
            sum_odd+=num;
         }

    }
    return 0;
}