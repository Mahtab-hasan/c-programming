#include <stdio.h>
#include <string.h>
int is_palindrome(char str[]) 
{
    int len = strlen(str);

    int i = 0, j = len - 1;
    while (i < j) 
    {
        if (str[i] != str[j]) 
        {
           return 0; // notpalindrome
        }
        i++;
        j--;
    }
return 1; // palindrome

}

int main() 
{
    char str[11];
    scanf("%s", str);

    if (is_palindrome(str))
    {
        printf("Palindrome\n");
    } 
    else 
    {
        printf("Not Palindrome\n");
    }
    return 0;
}
