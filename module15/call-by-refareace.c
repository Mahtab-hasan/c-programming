#include<stdio.h>
void fun(int *p)
{
    // printf("x er main value=%d",*p);
    *p=500;
}
int main()
{

    int x=10;
    // printf("x er address-%d",&x);
    fun(&x);
    // printf("FuN x er value= %d",x);

    return 0;
}