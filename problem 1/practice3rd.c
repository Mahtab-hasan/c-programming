#include<stdio.h>

int main()

 {
    int num1, num2;

 
 
    scanf("%d", &num1);
    scanf("%d", &num2);



    if (num1 >= 0 && num2 >= 0)
     {
        if (num1 % 2 == 0) 
        {
            printf("%d is even number\n", num1);
        } 
        else {
            printf("%d is odd number\n", num1);
        }
        if (num2 % 2 == 0) 
        {
            printf("%d is even number\n", num2);
        } 
        else {
            printf("%d is odd number\n", num2);
        }
    }
     else {
        printf("tumi beda kajer na ");
    }

    return 0;
}
