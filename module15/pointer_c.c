#include<stdio.h>
int main()
{
    int x=100;
    int *p=&x;
    printf("x-address-%p\n",&x);
    printf("p-value-%p\n",p);
    printf("p-address-%p\n",&p);
    printf("p-memory_size-%d\n",sizeof(p));

    return 0;
}