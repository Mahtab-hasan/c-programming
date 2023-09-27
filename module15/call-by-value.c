#include<stdio.h>
void fun(int x)
{

    x=100;
}
int main()
{

    int x=10;
    printf("main value-%d\n",x);
    fun(x);
    printf("x er value same e-%d\n",x);
    return 0;
}