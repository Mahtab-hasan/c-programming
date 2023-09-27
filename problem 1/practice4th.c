#include<stdio.h>

int main()

{
    int num1,num2,num3;

    scanf("%d",&num1); 
    scanf("%d",&num2);
    scanf("%d",&num3);

    if (num1 > 0)
    {
        printf("%d  is a positive number\n",num1);
    }
    else if (num1 < 0) 
    {
        printf("%d is a negative  number\n",num1);
    }
    else{
        printf("%d is zero\n",num1);
    }
    if (num2 > 0)
    {
        printf("%d  is a positive number\n",num2);
    }
    else if (num2 < 0) 
    {
        printf("%d is a negative  number\n",num2);
    }
    else{
        printf("%d is zero\n",num2);
    }
    if (num3 > 0)
    {
        printf("%d  is a positive number\n",num3);
    }
    else if (num3 < 0) 
    {
        printf("%d is a negative  number\n",num3);
    }
    else{
        printf("%d is zero\n",num3);
    }


}