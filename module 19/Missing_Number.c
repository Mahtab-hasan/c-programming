#include <stdio.h>

int first_miss_num(int sum, int num1, int num2, int num3)
 {
    int totalSum = num1 + num2 + num3;
    return sum - totalSum;
}

int main() 
{

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) 
    {
        int sum, num1, num2, num3;
        scanf("%d %d %d %d", &sum, &num1, &num2, &num3);

        int missnumber = first_miss_num(sum, num1, num2, num3);
        printf("%d\n",missnumber);
    }

    return 0;
}
