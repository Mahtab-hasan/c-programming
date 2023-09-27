#include <stdio.h>
#include <string.h>

int main() {
    char s[100000];
    int sum = 0;

    scanf("%s", &s);
    

    for (int i = 0; i < strlen(s); i++) 
    {
        sum += s[i] - '0';
    }

    printf("%d\n", sum);

    return 0;
}
