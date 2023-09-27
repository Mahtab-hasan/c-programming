#include<stdio.h>
 int sum()
 {
    int a ,b;
    scanf("%d %d",&a,&b);
    int s=a+b;
    return s;
 }
// int sum()
// {
//     printf("age lekhsi\n");
// }
int main()
{   
    // printf("pore lekhsi\n");
    int s= sum(100);
    // printf("3rd\n");
    printf("%d",s);

    return 0;
}