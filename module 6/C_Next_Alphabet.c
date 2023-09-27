#include<stdio.h>
int main()
{
    char c;
    char nc;
    scanf("%c", &c);

    if (c== 'z')
    {
        nc = 'a';
    }
    else
    {
        nc = c + 1 ;
    }
    printf("%c\n",nc);


    return 0;
}