#include <stdio.h>

int main() 
{
    char str[10001];
    fgets(str, sizeof(str), stdin);

    int small_c = 0;
    int capital_c = 0;
    int space_c = 0;

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            small_c++;
        } else if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            capital_c++;
        } else if (str[i] == ' ') 
        {
            space_c++;
        }
    }

    printf("Capital - %d\n", capital_c);
    printf("Small - %d\n", small_c);
    printf("Spaces - %d\n", space_c);

    return 0;
}
