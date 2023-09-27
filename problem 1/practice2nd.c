
#include <stdio.h>

int main() {
    int num1, num2;
    float div_result;

    
    scanf("%d %D", &num1,&num2);


    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);

    if (num2 != 0) {
        div_result = (float) num1 / num2;
        printf("%d / %d = %.2f\n", num1, num2, div_result);
    } else {
        printf("zero by div\n");
    }

    return 0;
}
