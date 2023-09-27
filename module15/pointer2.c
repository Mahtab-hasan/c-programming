#include<stdio.h>
int main()
{
    double x=5.26;
    double *p=&x;
    * p=10.20;
    printf("x value-%0.2lf\n",x);
    printf("x value-%0.2lf\n",*p);
    // printf("P value-%0.2lf\n",&p);
    printf("*P er size memory-%dbyte\n",sizeof(p));

    return 0;
}