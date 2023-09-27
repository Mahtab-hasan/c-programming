#include <stdio.h>

int main() {
    char s[100001];
    scanf("%s", s); 

    int c_upper = 0, c_lower = 0;
    for (int i = 0; s[i] != '\0'; i++) 
    { 
        if (s[i] >= 'A' && s[i] <= 'Z') 
        {
            c_upper++;
        } 
        else if (s[i] >= 'a' && s[i] <= 'z') 
        { 
            c_lower++; 
        }
    }
    printf("%d %d\n", c_upper, c_lower);


    return 0;
}
